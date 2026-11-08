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

// Function: entry_001c74d0
// Address: 0x1c74d0 - 0x1c7508
void entry_001c74d0_0x1c74d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c74d0_0x1c74d0");
#endif

    switch (ctx->pc) {
        case 0x1c74e4u: goto label_1c74e4;
        default: break;
    }

    ctx->pc = 0x1c74d0u;

    // 0x1c74d0: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x1c74d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1c74d4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c74d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74d8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1c74d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c74dc: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1C74DCu;
    SET_GPR_U32(ctx, 31, 0x1C74E4u);
    ctx->pc = 0x1C74E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74DCu;
    // 0x1c74e0: 0x728021  addu        $s0, $v1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1C74DCu, 0x1C74E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74E4u;
label_1c74e4:
    // 0x1c74e4: 0xfec20000  sd          $v0, 0x0($s6)
    ctx->pc = 0x1c74e4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 2));
    // 0x1c74e8: 0x8fa40240  lw          $a0, 0x240($sp)
    ctx->pc = 0x1c74e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1c74ec: 0x4820014  bltzl       $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C74ECu;
    {
        const bool branch_taken_0x1c74ec = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1c74ec) {
            ctx->pc = 0x1C74F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C74ECu;
            // 0x1c74f0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7540u;
            return;
        }
    }
    ctx->pc = 0x1C74F4u;
    // 0x1c74f4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1c74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1c74f8: 0x24900001  addiu       $s0, $a0, 0x1
    ctx->pc = 0x1c74f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c74fc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1c74fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c7500: 0x8fb30230  lw          $s3, 0x230($sp)
    ctx->pc = 0x1c7500u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1c7504: 0x458821  addu        $s1, $v0, $a1
    ctx->pc = 0x1c7504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x1c7508u;
}
