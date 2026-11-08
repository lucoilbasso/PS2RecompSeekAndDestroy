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

// Function: entry_00154ab8
// Address: 0x154ab8 - 0x154af4
void entry_00154ab8_0x154ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154ab8_0x154ab8");
#endif

    switch (ctx->pc) {
        case 0x154ae8u: goto label_154ae8;
        case 0x154af0u: goto label_154af0;
        default: break;
    }

    ctx->pc = 0x154ab8u;

    // 0x154ab8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x154ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x154abc: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x154ABCu;
    {
        const bool branch_taken_0x154abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154abc) {
            ctx->pc = 0x154AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154ABCu;
            // 0x154ac0: 0x8e030264  lw          $v1, 0x264($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154B10u;
            return;
        }
    }
    ctx->pc = 0x154AC4u;
    // 0x154ac4: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x154ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x154ac8: 0x2405c000  addiu       $a1, $zero, -0x4000
    ctx->pc = 0x154ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x154acc: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x154accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x154ad0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x154ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x154ad4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x154ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154ad8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x154AD8u;
    {
        const bool branch_taken_0x154ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x154ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AD8u;
        // 0x154adc: 0xb3300a  movz        $a2, $a1, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ad8) {
            ctx->pc = 0x154AF4u;
            return;
        }
    }
    ctx->pc = 0x154AE0u;
    // 0x154ae0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x154AE0u;
    SET_GPR_U32(ctx, 31, 0x154AE8u);
    ctx->pc = 0x154AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AE0u;
    // 0x154ae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154AE0u, 0x154AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AE8u;
label_154ae8:
    // 0x154ae8: 0xc06a298  jal         func_1A8A60
    ctx->pc = 0x154AE8u;
    SET_GPR_U32(ctx, 31, 0x154AF0u);
    ctx->pc = 0x154AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AE8u;
    // 0x154aec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A60u, 0x154AE8u, 0x154AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AF0u;
label_154af0:
    // 0x154af0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x154af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x154af4u;
}
