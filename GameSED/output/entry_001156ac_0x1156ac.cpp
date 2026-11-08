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

// Function: entry_001156ac
// Address: 0x1156ac - 0x11570c
void entry_001156ac_0x1156ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001156ac_0x1156ac");
#endif

    switch (ctx->pc) {
        case 0x1156d0u: goto label_1156d0;
        case 0x1156e0u: goto label_1156e0;
        default: break;
    }

    ctx->pc = 0x1156acu;

    // 0x1156ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1156acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1156b0: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1156b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1156b4: 0x325000ff  andi        $s0, $s2, 0xFF
    ctx->pc = 0x1156b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1156b8: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x1156b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x1156bc: 0x2421c0c0  addiu       $at, $at, -0x3F40
    ctx->pc = 0x1156bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294951104));
    // 0x1156c0: 0x318821  addu        $s1, $at, $s1
    ctx->pc = 0x1156c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x1156c4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1156c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1156c8: 0xc041882  jal         func_106208
    ctx->pc = 0x1156C8u;
    SET_GPR_U32(ctx, 31, 0x1156D0u);
    ctx->pc = 0x1156CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156C8u;
    // 0x1156cc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x1156C8u, 0x1156D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156D0u;
label_1156d0:
    // 0x1156d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1156d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1156d4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1156d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1156d8: 0xc041882  jal         func_106208
    ctx->pc = 0x1156D8u;
    SET_GPR_U32(ctx, 31, 0x1156E0u);
    ctx->pc = 0x1156DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156D8u;
    // 0x1156dc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x1156D8u, 0x1156E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156E0u;
label_1156e0:
    // 0x1156e0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1156e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1156e4: 0x58600009  blezl       $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1156E4u;
    {
        const bool branch_taken_0x1156e4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1156e4) {
            ctx->pc = 0x1156E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1156E4u;
            // 0x1156e8: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11570Cu;
            return;
        }
    }
    ctx->pc = 0x1156ECu;
    // 0x1156ec: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x1156ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
    // 0x1156f0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1156f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1156f4: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x1156f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1156f8: 0x2463fcb0  addiu       $v1, $v1, -0x350
    ctx->pc = 0x1156f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966448));
    // 0x1156fc: 0x8c620400  lw          $v0, 0x400($v1)
    ctx->pc = 0x1156fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2400B0u));
    // 0x115700: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x115704: 0xac620400  sw          $v0, 0x400($v1)
    ctx->pc = 0x115704u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
    // 0x115708: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x115708u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x11570cu;
}
