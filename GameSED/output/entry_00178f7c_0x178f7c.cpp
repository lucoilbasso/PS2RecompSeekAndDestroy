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

// Function: entry_00178f7c
// Address: 0x178f7c - 0x178fb0
void entry_00178f7c_0x178f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178f7c_0x178f7c");
#endif

    switch (ctx->pc) {
        case 0x178f90u: goto label_178f90;
        case 0x178fa4u: goto label_178fa4;
        default: break;
    }

    ctx->pc = 0x178f7cu;

    // 0x178f7c: 0x8e480010  lw          $t0, 0x10($s2)
    ctx->pc = 0x178f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x178f80: 0x26520014  addiu       $s2, $s2, 0x14
    ctx->pc = 0x178f80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x178f84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f88: 0xc05e676  jal         func_1799D8
    ctx->pc = 0x178F88u;
    SET_GPR_U32(ctx, 31, 0x178F90u);
    ctx->pc = 0x178F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178F88u;
    // 0x178f8c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1799D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1799D8u, 0x178F88u, 0x178F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178F90u;
label_178f90:
    // 0x178f90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x178f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f94: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x178F94u;
    {
        const bool branch_taken_0x178f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F94u;
        // 0x178f98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f94) {
            ctx->pc = 0x17900Cu;
            return;
        }
    }
    ctx->pc = 0x178F9Cu;
    // 0x178f9c: 0xc05e6e2  jal         func_179B88
    ctx->pc = 0x178F9Cu;
    SET_GPR_U32(ctx, 31, 0x178FA4u);
    ctx->pc = 0x178FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178F9Cu;
    // 0x178fa0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179B88u, 0x178F9Cu, 0x178FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178FA4u;
label_178fa4:
    // 0x178fa4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x178FA4u;
    {
        const bool branch_taken_0x178fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178fa4) {
            ctx->pc = 0x17900Cu;
            return;
        }
    }
    ctx->pc = 0x178FACu;
    // 0x178fac: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x178facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x178fb0u;
}
