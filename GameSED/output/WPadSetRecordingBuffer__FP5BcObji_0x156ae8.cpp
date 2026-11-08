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

// Function: WPadSetRecordingBuffer__FP5BcObji
// Address: 0x156ae8 - 0x156b58
void WPadSetRecordingBuffer__FP5BcObji_0x156ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadSetRecordingBuffer__FP5BcObji_0x156ae8");
#endif

    switch (ctx->pc) {
        case 0x156b24u: goto label_156b24;
        case 0x156b44u: goto label_156b44;
        default: break;
    }

    ctx->pc = 0x156ae8u;

    // 0x156ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x156aec: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x156aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x156af0: 0x24a3fffb  addiu       $v1, $a1, -0x5
    ctx->pc = 0x156af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967291));
    // 0x156af4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x156af4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x156af8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x156af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x156afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x156b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x156b04: 0x245135e0  addiu       $s1, $v0, 0x35E0
    ctx->pc = 0x156b04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 13792));
    // 0x156b08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x156b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x156b0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x156b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b10: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x156B10u;
    {
        const bool branch_taken_0x156b10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x156B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B10u;
        // 0x156b14: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b10) {
            ctx->pc = 0x156B1Cu;
            goto label_156b1c;
        }
    }
    ctx->pc = 0x156B18u;
    // 0x156b18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x156b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_156b1c:
    // 0x156b1c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x156B1Cu;
    SET_GPR_U32(ctx, 31, 0x156B24u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x156B1Cu, 0x156B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B24u;
label_156b24:
    // 0x156b24: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x156b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x156b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b2c: 0x24a56e20  addiu       $a1, $a1, 0x6E20
    ctx->pc = 0x156b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28192));
    // 0x156b30: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x156b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156b34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156B34u;
    {
        const bool branch_taken_0x156b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B34u;
        // 0x156b38: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b34) {
            ctx->pc = 0x156B44u;
            goto label_156b44;
        }
    }
    ctx->pc = 0x156B3Cu;
    // 0x156b3c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x156B3Cu;
    SET_GPR_U32(ctx, 31, 0x156B44u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x156B3Cu, 0x156B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B44u;
label_156b44:
    // 0x156b44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x156b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156b48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x156b48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156b4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x156b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156b50: 0x3e00008  jr          $ra
    ctx->pc = 0x156B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B50u;
        // 0x156b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156B58u;
}
