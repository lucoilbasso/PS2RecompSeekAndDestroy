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

// Function: entry_0017594c
// Address: 0x17594c - 0x175984
void entry_0017594c_0x17594c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017594c_0x17594c");
#endif

    ctx->pc = 0x17594cu;

    // 0x17594c: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x17594Cu;
    {
        const bool branch_taken_0x17594c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17594c) {
            ctx->pc = 0x175950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17594Cu;
            // 0x175950: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175988u;
            return;
        }
    }
    ctx->pc = 0x175954u;
    // 0x175954: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x175954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x175958: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x175958u;
    {
        const bool branch_taken_0x175958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175958u;
        // 0x17595c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175958) {
            ctx->pc = 0x175984u;
            return;
        }
    }
    ctx->pc = 0x175960u;
    // 0x175960: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x175960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x175964: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x175964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x175968: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x175968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x17596c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17596cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x175970: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x175970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x175974: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x175974u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 3));
    // 0x175978: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x175978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x17597c: 0xc05d40c  jal         func_175030
    ctx->pc = 0x17597Cu;
    SET_GPR_U32(ctx, 31, 0x175984u);
    ctx->pc = 0x175980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17597Cu;
    // 0x175980: 0x34840100  ori         $a0, $a0, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175030u, 0x17597Cu, 0x175984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175984u;
}
