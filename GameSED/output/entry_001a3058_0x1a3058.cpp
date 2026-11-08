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

// Function: entry_001a3058
// Address: 0x1a3058 - 0x1a3084
void entry_001a3058_0x1a3058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3058_0x1a3058");
#endif

    ctx->pc = 0x1a3058u;

label_1a3058:
    // 0x1a3058: 0xa4b10030  sh          $s1, 0x30($a1)
    ctx->pc = 0x1a3058u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 17));
label_1a305c:
    // 0x1a305c: 0x8e43007c  lw          $v1, 0x7C($s2)
    ctx->pc = 0x1a305cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_1a3060:
    // 0x1a3060: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x1a3060u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_1a3064:
    // 0x1a3064: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1a3064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1a3068:
    // 0x1a3068: 0x14720006  bne         $v1, $s2, . + 4 + (0x6 << 2)
label_1a306c:
    if (ctx->pc == 0x1A306Cu) {
        ctx->pc = 0x1A306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3068u;
        // 0x1a306c: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3070u;
        goto label_1a3070;
    }
    ctx->pc = 0x1A3068u;
    {
        const bool branch_taken_0x1a3068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x1A306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3068u;
        // 0x1a306c: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3068) {
            ctx->pc = 0x1A3084u;
            return;
        }
    }
    ctx->pc = 0x1A3070u;
label_1a3070:
    // 0x1a3070: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a3070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a3074:
    // 0x1a3074: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1a3074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1a3078:
    // 0x1a3078: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x1a3078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1a307c:
    // 0x1a307c: 0x40f809  jalr        $v0
label_1a3080:
    if (ctx->pc == 0x1A3080u) {
        ctx->pc = 0x1A3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A307Cu;
        // 0x1a3080: 0x2406fffe  addiu       $a2, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3084u;
        goto label_fallthrough_0x1a307c;
    }
    ctx->pc = 0x1A307Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3084u);
        ctx->pc = 0x1A3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A307Cu;
        // 0x1a3080: 0x2406fffe  addiu       $a2, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A307Cu, 0x1A3084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a307c:
    ctx->pc = 0x1A3084u;
}
