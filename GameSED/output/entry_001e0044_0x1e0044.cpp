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

// Function: entry_001e0044
// Address: 0x1e0044 - 0x1e0094
void entry_001e0044_0x1e0044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0044_0x1e0044");
#endif

    switch (ctx->pc) {
        case 0x1e0068u: goto label_1e0068;
        case 0x1e0088u: goto label_1e0088;
        default: break;
    }

    ctx->pc = 0x1e0044u;

    // 0x1e0044: 0x8e6301ac  lw          $v1, 0x1AC($s3)
    ctx->pc = 0x1e0044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
    // 0x1e0048: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e0048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e004c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E004Cu;
    {
        const bool branch_taken_0x1e004c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E004Cu;
        // 0x1e0050: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e004c) {
            ctx->pc = 0x1E0094u;
            return;
        }
    }
    ctx->pc = 0x1E0054u;
    // 0x1e0054: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e0054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0058: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1e0058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e005c: 0x8ca60194  lw          $a2, 0x194($a1)
    ctx->pc = 0x1e005cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 404)));
    // 0x1e0060: 0xc064fa6  jal         func_193E98
    ctx->pc = 0x1E0060u;
    SET_GPR_U32(ctx, 31, 0x1E0068u);
    ctx->pc = 0x1E0064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0060u;
    // 0x1e0064: 0x24102000  addiu       $s0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193E98u, 0x1E0060u, 0x1E0068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0068u;
label_1e0068:
    // 0x1e0068: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x1e0068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x1e006c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e006cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e0070: 0x2484de68  addiu       $a0, $a0, -0x2198
    ctx->pc = 0x1e0070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958696));
    // 0x1e0074: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1e0074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1e0078: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0078u;
    {
        const bool branch_taken_0x1e0078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0078u;
        // 0x1e007c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0078) {
            ctx->pc = 0x1E0094u;
            return;
        }
    }
    ctx->pc = 0x1E0080u;
    // 0x1e0080: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1E0080u;
    SET_GPR_U32(ctx, 31, 0x1E0088u);
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1E0080u, 0x1E0088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0088u;
label_1e0088:
    // 0x1e0088: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e0088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e008c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x1e008cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x1e0090: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1e0090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x1e0094u;
}
