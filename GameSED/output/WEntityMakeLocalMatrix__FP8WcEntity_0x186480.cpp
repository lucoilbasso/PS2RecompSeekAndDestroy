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

// Function: WEntityMakeLocalMatrix__FP8WcEntity
// Address: 0x186480 - 0x1864d0
void WEntityMakeLocalMatrix__FP8WcEntity_0x186480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WEntityMakeLocalMatrix__FP8WcEntity_0x186480");
#endif

    switch (ctx->pc) {
        case 0x1864a0u: goto label_1864a0;
        case 0x1864bcu: goto label_1864bc;
        default: break;
    }

    ctx->pc = 0x186480u;

    // 0x186480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186488: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18648c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18648cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x186490: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x186490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x186494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186498: 0xc061390  jal         func_184E40
    ctx->pc = 0x186498u;
    SET_GPR_U32(ctx, 31, 0x1864A0u);
    ctx->pc = 0x18649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186498u;
    // 0x18649c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184E40u, 0x186498u, 0x1864A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1864A0u;
label_1864a0:
    // 0x1864a0: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1864a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1864a4: 0x30431fff  andi        $v1, $v0, 0x1FFF
    ctx->pc = 0x1864a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x1864a8: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1864a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1864ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1864ACu;
    {
        const bool branch_taken_0x1864ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1864B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864ACu;
        // 0x1864b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1864ac) {
            ctx->pc = 0x1864BCu;
            goto label_1864bc;
        }
    }
    ctx->pc = 0x1864B4u;
    // 0x1864b4: 0xc061934  jal         func_1864D0
    ctx->pc = 0x1864B4u;
    SET_GPR_U32(ctx, 31, 0x1864BCu);
    ctx->pc = 0x1864B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1864B4u;
    // 0x1864b8: 0xa6230002  sh          $v1, 0x2($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1864D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1864D0u, 0x1864B4u, 0x1864BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1864BCu;
label_1864bc:
    // 0x1864bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1864bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1864c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1864c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1864c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1864c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1864c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1864C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1864CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864C8u;
        // 0x1864cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1864C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1864D0u;
}
