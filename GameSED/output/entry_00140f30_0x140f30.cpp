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

// Function: entry_00140f30
// Address: 0x140f30 - 0x140f94
void entry_00140f30_0x140f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140f30_0x140f30");
#endif

    switch (ctx->pc) {
        case 0x140f38u: goto label_140f38;
        case 0x140f50u: goto label_140f50;
        default: break;
    }

    ctx->pc = 0x140f30u;

    // 0x140f30: 0xc0503e6  jal         func_140F98
    ctx->pc = 0x140F30u;
    SET_GPR_U32(ctx, 31, 0x140F38u);
    ctx->pc = 0x140F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140F30u;
    // 0x140f34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F98u, 0x140F30u, 0x140F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140F38u;
label_140f38:
    // 0x140f38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x140f38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140f3c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x140f3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140f40: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x140f40u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
    // 0x140f44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x140f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140f48: 0xc050494  jal         func_141250
    ctx->pc = 0x140F48u;
    SET_GPR_U32(ctx, 31, 0x140F50u);
    ctx->pc = 0x140F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140F48u;
    // 0x140f4c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141250u, 0x140F48u, 0x140F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140F50u;
label_140f50:
    // 0x140f50: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x140f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x140f54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x140f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140f58: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x140f58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x140f5c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x140f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x140f60: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x140f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x140f64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x140f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140f68: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x140f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x140f6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x140f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140f70: 0xae63001c  sw          $v1, 0x1C($s3)
    ctx->pc = 0x140f70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
    // 0x140f74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x140f74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140f78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x140f78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x140f7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x140f7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140f80: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x140f80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x140f84: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x140f84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140f88: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x140f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x140f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x140F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F8Cu;
        // 0x140f90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140F94u;
}
