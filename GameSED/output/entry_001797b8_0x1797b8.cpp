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

// Function: entry_001797b8
// Address: 0x1797b8 - 0x179808
void entry_001797b8_0x1797b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001797b8_0x1797b8");
#endif

    switch (ctx->pc) {
        case 0x1797d0u: goto label_1797d0;
        case 0x1797e0u: goto label_1797e0;
        case 0x1797f4u: goto label_1797f4;
        default: break;
    }

    ctx->pc = 0x1797b8u;

    // 0x1797b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1797b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797bc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1797bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1797c0: 0x24a5d540  addiu       $a1, $a1, -0x2AC0
    ctx->pc = 0x1797c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956352));
    // 0x1797c4: 0x24e7d548  addiu       $a3, $a3, -0x2AB8
    ctx->pc = 0x1797c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956360));
    // 0x1797c8: 0xc0741de  jal         func_1D0778
    ctx->pc = 0x1797C8u;
    SET_GPR_U32(ctx, 31, 0x1797D0u);
    ctx->pc = 0x1797CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1797C8u;
    // 0x1797cc: 0x26060540  addiu       $a2, $s0, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0778u, 0x1797C8u, 0x1797D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1797D0u;
label_1797d0:
    // 0x1797d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1797d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1797d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797d8: 0xc05e76a  jal         func_179DA8
    ctx->pc = 0x1797D8u;
    SET_GPR_U32(ctx, 31, 0x1797E0u);
    ctx->pc = 0x1797DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1797D8u;
    // 0x1797dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179DA8u, 0x1797D8u, 0x1797E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1797E0u;
label_1797e0:
    // 0x1797e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1797e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1797E4u;
    {
        const bool branch_taken_0x1797e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1797E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1797E4u;
        // 0x1797e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1797e4) {
            ctx->pc = 0x179830u;
            return;
        }
    }
    ctx->pc = 0x1797ECu;
    // 0x1797ec: 0xc05e796  jal         func_179E58
    ctx->pc = 0x1797ECu;
    SET_GPR_U32(ctx, 31, 0x1797F4u);
    ctx->pc = 0x179E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179E58u, 0x1797ECu, 0x1797F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1797F4u;
label_1797f4:
    // 0x1797f4: 0x5053000e  beql        $v0, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x1797F4u;
    {
        const bool branch_taken_0x1797f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1797f4) {
            ctx->pc = 0x1797F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1797F4u;
            // 0x1797f8: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179830u;
            return;
        }
    }
    ctx->pc = 0x1797FCu;
    // 0x1797fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1797FCu;
    {
        const bool branch_taken_0x1797fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1797fc) {
            ctx->pc = 0x179830u;
            return;
        }
    }
    ctx->pc = 0x179804u;
    // 0x179804: 0x0  nop
    ctx->pc = 0x179804u;
    // NOP
    ctx->pc = 0x179808u;
}
