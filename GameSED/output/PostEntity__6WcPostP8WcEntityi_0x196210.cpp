#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PostEntity__6WcPostP8WcEntityi
// Address: 0x196210 - 0x19625c
void PostEntity__6WcPostP8WcEntityi_0x196210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PostEntity__6WcPostP8WcEntityi_0x196210");
#endif

    switch (ctx->pc) {
        case 0x196250u: goto label_196250;
        default: break;
    }

    ctx->pc = 0x196210u;

    // 0x196210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196214: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x196214u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19621c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x19621cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196220: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x196220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x196224: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x196224u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x196228: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x196228u;
    {
        const bool branch_taken_0x196228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196228u;
        // 0x19622c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196228) {
            ctx->pc = 0x196248u;
            goto label_196248;
        }
    }
    ctx->pc = 0x196230u;
    // 0x196230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196234: 0xace80014  sw          $t0, 0x14($a3)
    ctx->pc = 0x196234u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 8));
    // 0x196238: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x196238u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
    // 0x19623c: 0x806182a  j           func_1860A8
    ctx->pc = 0x19623Cu;
    ctx->pc = 0x196240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19623Cu;
    // 0x196240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1860A8u;
    SetWorldBase__8WcEntityP8WcEntityT1_0x1860a8(rdram, ctx, runtime); return;
    ctx->pc = 0x196244u;
    // 0x196244: 0x0  nop
    ctx->pc = 0x196244u;
    // NOP
label_196248:
    // 0x196248: 0xc0612e0  jal         func_184B80
    ctx->pc = 0x196248u;
    SET_GPR_U32(ctx, 31, 0x196250u);
    ctx->pc = 0x19624Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196248u;
    // 0x19624c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184B80u, 0x196248u, 0x196250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196250u;
label_196250:
    // 0x196250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196254: 0x3e00008  jr          $ra
    ctx->pc = 0x196254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196254u;
        // 0x196258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19625Cu;
}
