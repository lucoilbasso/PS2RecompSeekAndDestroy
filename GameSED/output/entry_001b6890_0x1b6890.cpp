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

// Function: entry_001b6890
// Address: 0x1b6890 - 0x1b68d4
void entry_001b6890_0x1b6890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6890_0x1b6890");
#endif

    switch (ctx->pc) {
        case 0x1b68bcu: goto label_1b68bc;
        default: break;
    }

    ctx->pc = 0x1b6890u;

    // 0x1b6890: 0x24e7b400  addiu       $a3, $a3, -0x4C00
    ctx->pc = 0x1b6890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947840));
    // 0x1b6894: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b6894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b6898: 0x2484b600  addiu       $a0, $a0, -0x4A00
    ctx->pc = 0x1b6898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948352));
    // 0x1b689c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b689cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b68a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b68a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b68a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b68a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68a8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1b68a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b68ac: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1b68acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68b0: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1b68b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b68b4: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B68B4u;
    SET_GPR_U32(ctx, 31, 0x1B68BCu);
    ctx->pc = 0x1B68B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B68B4u;
    // 0x1b68b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B68B4u, 0x1B68BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B68BCu;
label_1b68bc:
    // 0x1b68bc: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x1b68bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x1b68c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b68c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b68c4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1b68c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b68c8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1b68c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1b68cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b68ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68d0: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1b68d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    ctx->pc = 0x1b68d4u;
}
