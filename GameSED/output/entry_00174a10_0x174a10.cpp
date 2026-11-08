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

// Function: entry_00174a10
// Address: 0x174a10 - 0x174aa0
void entry_00174a10_0x174a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174a10_0x174a10");
#endif

    switch (ctx->pc) {
        case 0x174a5cu: goto label_174a5c;
        case 0x174a78u: goto label_174a78;
        default: break;
    }

    ctx->pc = 0x174a10u;

    // 0x174a10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x174a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x174a14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x174a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x174a18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x174a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x174a1c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x174a1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174a20: 0x31b7a  dsrl        $v1, $v1, 13
    ctx->pc = 0x174a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 13);
    // 0x174a24: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x174a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x174a28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x174a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x174a2c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x174a2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x174a30: 0xaf838c10  sw          $v1, -0x73F0($gp)
    ctx->pc = 0x174a30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937616), GPR_U32(ctx, 3));
    // 0x174a34: 0x8f828c04  lw          $v0, -0x73FC($gp)
    ctx->pc = 0x174a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937604)));
    // 0x174a38: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x174A38u;
    {
        const bool branch_taken_0x174a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a38) {
            ctx->pc = 0x174B64u;
            return;
        }
    }
    ctx->pc = 0x174A40u;
    // 0x174a40: 0x8f828c08  lw          $v0, -0x73F8($gp)
    ctx->pc = 0x174a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937608)));
    // 0x174a44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x174a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174a48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x174a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x174a50: 0xaf828c08  sw          $v0, -0x73F8($gp)
    ctx->pc = 0x174a50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937608), GPR_U32(ctx, 2));
    // 0x174a54: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x174A54u;
    SET_GPR_U32(ctx, 31, 0x174A5Cu);
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x174A54u, 0x174A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A5Cu;
label_174a5c:
    // 0x174a5c: 0xaf828c14  sw          $v0, -0x73EC($gp)
    ctx->pc = 0x174a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937620), GPR_U32(ctx, 2));
    // 0x174a60: 0x8f828c14  lw          $v0, -0x73EC($gp)
    ctx->pc = 0x174a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937620)));
    // 0x174a64: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x174A64u;
    {
        const bool branch_taken_0x174a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174a64) {
            ctx->pc = 0x174B64u;
            return;
        }
    }
    ctx->pc = 0x174A6Cu;
    // 0x174a6c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x174a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x174a70: 0xc05cf94  jal         func_173E50
    ctx->pc = 0x174A70u;
    SET_GPR_U32(ctx, 31, 0x174A78u);
    ctx->pc = 0x174A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A70u;
    // 0x174a74: 0x248412a8  addiu       $a0, $a0, 0x12A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173E50u, 0x174A70u, 0x174A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A78u;
label_174a78:
    // 0x174a78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x174a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a7c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x174A7Cu;
    {
        const bool branch_taken_0x174a7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x174A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A7Cu;
        // 0x174a80: 0x8f8391a0  lw          $v1, -0x6E60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a7c) {
            ctx->pc = 0x174AA0u;
            return;
        }
    }
    ctx->pc = 0x174A84u;
    // 0x174a84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x174a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x174a88: 0xaf8391a0  sw          $v1, -0x6E60($gp)
    ctx->pc = 0x174a88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939040), GPR_U32(ctx, 3));
    // 0x174a8c: 0xf  sync
    ctx->pc = 0x174a8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x174a90: 0x42000038  ei
    ctx->pc = 0x174a90u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x174a94: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x174A94u;
    {
        const bool branch_taken_0x174a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A94u;
        // 0x174a98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a94) {
            ctx->pc = 0x174B74u;
            return;
        }
    }
    ctx->pc = 0x174A9Cu;
    // 0x174a9c: 0x0  nop
    ctx->pc = 0x174a9cu;
    // NOP
    ctx->pc = 0x174aa0u;
}
