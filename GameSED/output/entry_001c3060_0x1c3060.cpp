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

// Function: entry_001c3060
// Address: 0x1c3060 - 0x1c30b0
void entry_001c3060_0x1c3060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3060_0x1c3060");
#endif

    switch (ctx->pc) {
        case 0x1c3068u: goto label_1c3068;
        case 0x1c30acu: goto label_1c30ac;
        default: break;
    }

    ctx->pc = 0x1c3060u;

    // 0x1c3060: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1C3060u;
    SET_GPR_U32(ctx, 31, 0x1C3068u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1C3060u, 0x1C3068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3068u;
label_1c3068:
    // 0x1c3068: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c306c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c306cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3070: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x1c3070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x1c3074: 0x34a5d410  ori         $a1, $a1, 0xD410
    ctx->pc = 0x1c3074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54288);
    // 0x1c3078: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1c3078u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0));
    // 0x1c307c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c307cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3080: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x1c3080u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 18));
    // 0x1c3084: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x1c3084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x1c3088: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c3088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c308c: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x1c308cu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 20));
    // 0x1c3090: 0x34a5d400  ori         $a1, $a1, 0xD400
    ctx->pc = 0x1c3090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54272);
    // 0x1c3094: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x1c3094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1c3098: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1c3098u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 3));
    // 0x1c309c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C309Cu;
    {
        const bool branch_taken_0x1c309c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C309Cu;
        // 0x1c30a0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c309c) {
            ctx->pc = 0x1C30B0u;
            return;
        }
    }
    ctx->pc = 0x1C30A4u;
    // 0x1c30a4: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1C30A4u;
    SET_GPR_U32(ctx, 31, 0x1C30ACu);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1C30A4u, 0x1C30ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30ACu;
label_1c30ac:
    // 0x1c30ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c30acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x1c30b0u;
}
