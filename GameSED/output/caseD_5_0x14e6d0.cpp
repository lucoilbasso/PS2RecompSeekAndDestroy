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

// Function: caseD_5
// Address: 0x14e6d0 - 0x14e710
void caseD_5_0x14e6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x14e6d0");
#endif

    switch (ctx->pc) {
        case 0x14e6d8u: goto label_14e6d8;
        default: break;
    }

    ctx->pc = 0x14e6d0u;

    // 0x14e6d0: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14E6D0u;
    SET_GPR_U32(ctx, 31, 0x14E6D8u);
    ctx->pc = 0x14E6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E6D0u;
    // 0x14e6d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14E6D0u, 0x14E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E6D8u;
label_14e6d8:
    // 0x14e6d8: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x14e6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x14e6dc: 0x108000c3  beqz        $a0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x14E6DCu;
    {
        const bool branch_taken_0x14e6dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6DCu;
        // 0x14e6e0: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6dc) {
            ctx->pc = 0x14E9ECu;
            return;
        }
    }
    ctx->pc = 0x14E6E4u;
    // 0x14e6e4: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x14e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x14e6e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14e6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14e6ec: 0x144000c0  bnez        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x14E6ECu;
    {
        const bool branch_taken_0x14e6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6ECu;
        // 0x14e6f0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6ec) {
            ctx->pc = 0x14E9F0u;
            return;
        }
    }
    ctx->pc = 0x14E6F4u;
    // 0x14e6f4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x14e6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x14e6f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x14e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14e6fc: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x14e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x14e700: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14e700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14e704: 0x8c639a4c  lw          $v1, -0x65B4($v1)
    ctx->pc = 0x14e704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941260)));
    // 0x14e708: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x14E708u;
    {
        const bool branch_taken_0x14e708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E708u;
        // 0x14e70c: 0xae230848  sw          $v1, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e708) {
            ctx->pc = 0x14E9ECu;
            return;
        }
    }
    ctx->pc = 0x14E710u;
}
