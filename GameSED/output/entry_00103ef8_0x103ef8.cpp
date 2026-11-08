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

// Function: entry_00103ef8
// Address: 0x103ef8 - 0x103fa4
void entry_00103ef8_0x103ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103ef8_0x103ef8");
#endif

    switch (ctx->pc) {
        case 0x103f20u: goto label_103f20;
        case 0x103f28u: goto label_103f28;
        default: break;
    }

    ctx->pc = 0x103ef8u;

    // 0x103ef8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103efc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x103efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103f00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x103f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x103f04: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x103f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103f08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x103f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x103f0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x103f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x103f10: 0x8c920028  lw          $s2, 0x28($a0)
    ctx->pc = 0x103f10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x103f14: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x103f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x103f18: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x103F18u;
    SET_GPR_U32(ctx, 31, 0x103F20u);
    ctx->pc = 0x103F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F18u;
    // 0x103f1c: 0x2459021  addu        $s2, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x103F18u, 0x103F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F20u;
label_103f20:
    // 0x103f20: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x103F20u;
    SET_GPR_U32(ctx, 31, 0x103F28u);
    ctx->pc = 0x103F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F20u;
    // 0x103f24: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x103F20u, 0x103F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F28u;
label_103f28:
    // 0x103f28: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x103f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x103f2c: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x103f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x103f30: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x103f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x103f34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x103f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x103f38: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x103f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x103f3c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x103f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x103f40: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x103f40u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x103f44: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x103f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x103f48: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x103f48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x103f4c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x103f4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x103f50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103f54: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x103f54u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x103f58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x103f58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103f5c: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x103f5cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x103f60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x103f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x103f64: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x103f64u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x103f68: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x103f68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x103f6c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x103f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x103f70: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x103f70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x103f74: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x103f74u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x103f78: 0xdc820020  ld          $v0, 0x20($a0)
    ctx->pc = 0x103f78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x103f7c: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x103f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x103f80: 0xdc830028  ld          $v1, 0x28($a0)
    ctx->pc = 0x103f80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x103f84: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x103f84u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    // 0x103f88: 0xdc820030  ld          $v0, 0x30($a0)
    ctx->pc = 0x103f88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x103f8c: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x103f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x103f90: 0xdc830038  ld          $v1, 0x38($a0)
    ctx->pc = 0x103f90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x103f94: 0xfe030038  sd          $v1, 0x38($s0)
    ctx->pc = 0x103f94u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 3));
    // 0x103f98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x103F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F9Cu;
        // 0x103fa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103FA4u;
}
