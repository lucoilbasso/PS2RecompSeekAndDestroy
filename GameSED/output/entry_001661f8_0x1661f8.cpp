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

// Function: entry_001661f8
// Address: 0x1661f8 - 0x166228
void entry_001661f8_0x1661f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001661f8_0x1661f8");
#endif

    switch (ctx->pc) {
        case 0x16620cu: goto label_16620c;
        default: break;
    }

    ctx->pc = 0x1661f8u;

label_1661f8:
    // 0x1661f8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1661f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1661fc:
    // 0x1661fc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1661fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_166200:
    // 0x166200: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x166200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_166204:
    // 0x166204: 0xc0f809  jalr        $a2
label_166208:
    if (ctx->pc == 0x166208u) {
        ctx->pc = 0x166208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166204u;
        // 0x166208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16620Cu;
        goto label_16620c;
    }
    ctx->pc = 0x166204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x16620Cu);
        ctx->pc = 0x166208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166204u;
        // 0x166208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166204u, 0x16620Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16620Cu;
label_16620c:
    // 0x16620c: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x16620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_166210:
    // 0x166210: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_166214:
    if (ctx->pc == 0x166214u) {
        ctx->pc = 0x166214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166210u;
        // 0x166214: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166218u;
        goto label_166218;
    }
    ctx->pc = 0x166210u;
    {
        const bool branch_taken_0x166210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166210) {
            ctx->pc = 0x166214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166210u;
            // 0x166214: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x166230u;
            return;
        }
    }
    ctx->pc = 0x166218u;
label_166218:
    // 0x166218: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x166218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_16621c:
    // 0x16621c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16621cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166220:
    // 0x166220: 0xc068584  jal         func_1A1610
label_166224:
    if (ctx->pc == 0x166224u) {
        ctx->pc = 0x166224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166220u;
        // 0x166224: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166228u;
        goto label_fallthrough_0x166220;
    }
    ctx->pc = 0x166220u;
    SET_GPR_U32(ctx, 31, 0x166228u);
    ctx->pc = 0x166224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166220u;
    // 0x166224: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x166220u, 0x166228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x166220:
    ctx->pc = 0x166228u;
}
