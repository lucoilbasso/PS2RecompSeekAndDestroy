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

// Function: BMemPMgrDirect__FP8BMemPoolUii
// Address: 0x19ff58 - 0x19ffb0
void BMemPMgrDirect__FP8BMemPoolUii_0x19ff58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrDirect__FP8BMemPoolUii_0x19ff58");
#endif

    switch (ctx->pc) {
        case 0x19ff84u: goto label_19ff84;
        default: break;
    }

    ctx->pc = 0x19ff58u;

    // 0x19ff58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ff58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ff5c: 0x24a5ffc0  addiu       $a1, $a1, -0x40
    ctx->pc = 0x19ff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
    // 0x19ff60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19ff60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19ff64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19ff64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff68: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x19ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x19ff6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ff6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ff70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ff70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ff74: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19ff74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff78: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x19ff78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x19ff7c: 0xc067ff4  jal         func_19FFD0
    ctx->pc = 0x19FF7Cu;
    SET_GPR_U32(ctx, 31, 0x19FF84u);
    ctx->pc = 0x19FF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF7Cu;
    // 0x19ff80: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FFD0u, 0x19FF7Cu, 0x19FF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF84u;
label_19ff84:
    // 0x19ff84: 0xae30001c  sw          $s0, 0x1C($s1)
    ctx->pc = 0x19ff84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
    // 0x19ff88: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x19ff88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19ff8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19ff8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff90: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x19ff90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x19ff94: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x19ff94u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x19ff98: 0xac31f640  sw          $s1, -0x9C0($at)
    ctx->pc = 0x19ff98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964800), GPR_U32(ctx, 17));
    // 0x19ff9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ff9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ffa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19ffa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19ffa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ffa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ffa8: 0x3e00008  jr          $ra
    ctx->pc = 0x19FFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFA8u;
        // 0x19ffac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FFB0u;
}
