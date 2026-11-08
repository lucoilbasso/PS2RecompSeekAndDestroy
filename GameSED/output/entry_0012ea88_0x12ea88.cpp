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

// Function: entry_0012ea88
// Address: 0x12ea88 - 0x12eb50
void entry_0012ea88_0x12ea88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ea88_0x12ea88");
#endif

    ctx->pc = 0x12ea88u;

    // 0x12ea88: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x12ea88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12ea8c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x12ea8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x12ea90: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x12ea90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ea94: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x12ea94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x12ea98: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x12ea98u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x12ea9c: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x12ea9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12eaa0: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x12eaa0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12eaa4: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x12eaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x12eaa8: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x12eaa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x12eaac: 0x63538  dsll        $a2, $a2, 20
    ctx->pc = 0x12eaacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 20);
    // 0x12eab0: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x12eab0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12eab4: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x12eab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x12eab8: 0x9627000c  lhu         $a3, 0xC($s1)
    ctx->pc = 0x12eab8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12eabc: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x12eabcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x12eac0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x12eac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x12eac4: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x12eac4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12eac8: 0x73cfc  dsll32      $a3, $a3, 19
    ctx->pc = 0x12eac8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 19));
    // 0x12eacc: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x12eaccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x12ead0: 0xb62825  or          $a1, $a1, $s6
    ctx->pc = 0x12ead0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 22));
    // 0x12ead4: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x12ead4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x12ead8: 0xde040020  ld          $a0, 0x20($s0)
    ctx->pc = 0x12ead8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12eadc: 0x96220018  lhu         $v0, 0x18($s1)
    ctx->pc = 0x12eadcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x12eae0: 0xfe240020  sd          $a0, 0x20($s1)
    ctx->pc = 0x12eae0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 4));
    // 0x12eae4: 0x9623001a  lhu         $v1, 0x1A($s1)
    ctx->pc = 0x12eae4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x12eae8: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x12eae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x12eaec: 0xde040028  ld          $a0, 0x28($s0)
    ctx->pc = 0x12eaecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x12eaf0: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x12eaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x12eaf4: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x12eaf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x12eaf8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x12eaf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x12eafc: 0xfe240028  sd          $a0, 0x28($s1)
    ctx->pc = 0x12eafcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 4));
    // 0x12eb00: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x12eb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x12eb04: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x12eb04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x12eb08: 0xde020030  ld          $v0, 0x30($s0)
    ctx->pc = 0x12eb08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x12eb0c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x12eb0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x12eb10: 0xfe250038  sd          $a1, 0x38($s1)
    ctx->pc = 0x12eb10u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 5));
    // 0x12eb14: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x12eb14u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x12eb18: 0xae280040  sw          $t0, 0x40($s1)
    ctx->pc = 0x12eb18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 8));
    // 0x12eb1c: 0x681ffd0  bgez        $s4, . + 4 + (-0x30 << 2)
    ctx->pc = 0x12EB1Cu;
    {
        const bool branch_taken_0x12eb1c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x12EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB1Cu;
        // 0x12eb20: 0x26310048  addiu       $s1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb1c) {
            ctx->pc = 0x12EA60u;
            return;
        }
    }
    ctx->pc = 0x12EB24u;
    // 0x12eb24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12eb24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12eb28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12eb28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12eb2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12eb2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12eb30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12eb30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12eb34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12eb34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12eb38: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x12eb38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12eb3c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x12eb3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12eb40: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x12eb40u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12eb44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12eb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12eb48: 0x3e00008  jr          $ra
    ctx->pc = 0x12EB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB48u;
        // 0x12eb4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EB50u;
}
