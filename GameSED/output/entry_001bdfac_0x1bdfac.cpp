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

// Function: entry_001bdfac
// Address: 0x1bdfac - 0x1bdff0
void entry_001bdfac_0x1bdfac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdfac_0x1bdfac");
#endif

    switch (ctx->pc) {
        case 0x1bdfb8u: goto label_1bdfb8;
        default: break;
    }

    ctx->pc = 0x1bdfacu;

    // 0x1bdfac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfb0: 0xc070ae0  jal         func_1C2B80
    ctx->pc = 0x1BDFB0u;
    SET_GPR_U32(ctx, 31, 0x1BDFB8u);
    ctx->pc = 0x1BDFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDFB0u;
    // 0x1bdfb4: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2B80u, 0x1BDFB0u, 0x1BDFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFB8u;
label_1bdfb8:
    // 0x1bdfb8: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1bdfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1bdfbc: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x1bdfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1bdfc0: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x1bdfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x1bdfc4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1bdfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bdfc8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1bdfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1bdfcc: 0x8e030118  lw          $v1, 0x118($s0)
    ctx->pc = 0x1bdfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1bdfd0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1bdfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bdfd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bdfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bdfd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bdfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bdfdc: 0xae030118  sw          $v1, 0x118($s0)
    ctx->pc = 0x1bdfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 3));
    // 0x1bdfe0: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BDFE0u;
    {
        const bool branch_taken_0x1bdfe0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFE0u;
        // 0x1bdfe4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfe0) {
            ctx->pc = 0x1BDFF0u;
            return;
        }
    }
    ctx->pc = 0x1BDFE8u;
    // 0x1bdfe8: 0xc06f698  jal         func_1BDA60
    ctx->pc = 0x1BDFE8u;
    SET_GPR_U32(ctx, 31, 0x1BDFF0u);
    ctx->pc = 0x1BDFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDFE8u;
    // 0x1bdfec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA60u, 0x1BDFE8u, 0x1BDFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFF0u;
}
