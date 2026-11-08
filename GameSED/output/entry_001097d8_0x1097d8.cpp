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

// Function: entry_001097d8
// Address: 0x1097d8 - 0x109800
void entry_001097d8_0x1097d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001097d8_0x1097d8");
#endif

    switch (ctx->pc) {
        case 0x1097fcu: goto label_1097fc;
        default: break;
    }

    ctx->pc = 0x1097d8u;

label_1097d8:
    // 0x1097d8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1097d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1097dc:
    // 0x1097dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1097dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1097e0:
    // 0x1097e0: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x1097e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
label_1097e4:
    // 0x1097e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1097e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1097e8:
    // 0x1097e8: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x1097e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_1097ec:
    // 0x1097ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1097ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1097f0:
    // 0x1097f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1097f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1097f4:
    // 0x1097f4: 0x60f809  jalr        $v1
label_1097f8:
    if (ctx->pc == 0x1097F8u) {
        ctx->pc = 0x1097F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097F4u;
        // 0x1097f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097FCu;
        goto label_1097fc;
    }
    ctx->pc = 0x1097F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1097FCu);
        ctx->pc = 0x1097F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097F4u;
        // 0x1097f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1097F4u, 0x1097FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1097FCu;
label_1097fc:
    // 0x1097fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1097fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x109800u;
}
