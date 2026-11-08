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

// Function: entry_001bcea8
// Address: 0x1bcea8 - 0x1bcedc
void entry_001bcea8_0x1bcea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcea8_0x1bcea8");
#endif

    switch (ctx->pc) {
        case 0x1bceb4u: goto label_1bceb4;
        case 0x1bced4u: goto label_1bced4;
        default: break;
    }

    ctx->pc = 0x1bcea8u;

    // 0x1bcea8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bcea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bceac: 0xc07100a  jal         func_1C4028
    ctx->pc = 0x1BCEACu;
    SET_GPR_U32(ctx, 31, 0x1BCEB4u);
    ctx->pc = 0x1BCEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCEACu;
    // 0x1bceb0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4028u, 0x1BCEACu, 0x1BCEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCEB4u;
label_1bceb4:
    // 0x1bceb4: 0x240301bb  addiu       $v1, $zero, 0x1BB
    ctx->pc = 0x1bceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
    // 0x1bceb8: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCEB8u;
    {
        const bool branch_taken_0x1bceb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bceb8) {
            ctx->pc = 0x1BCEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCEB8u;
            // 0x1bcebc: 0xaec0000c  sw          $zero, 0xC($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCEDCu;
            return;
        }
    }
    ctx->pc = 0x1BCEC0u;
    // 0x1bcec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcec4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bcec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcec8: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x1bcec8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x1bcecc: 0xc06f3c2  jal         func_1BCF08
    ctx->pc = 0x1BCECCu;
    SET_GPR_U32(ctx, 31, 0x1BCED4u);
    ctx->pc = 0x1BCED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCECCu;
    // 0x1bced0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCF08u, 0x1BCECCu, 0x1BCED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCED4u;
label_1bced4:
    // 0x1bced4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCED4u;
    {
        const bool branch_taken_0x1bced4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCED4u;
        // 0x1bced8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bced4) {
            ctx->pc = 0x1BCEE0u;
            return;
        }
    }
    ctx->pc = 0x1BCEDCu;
}
