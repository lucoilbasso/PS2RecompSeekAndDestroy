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

// Function: entry_00116fb8
// Address: 0x116fb8 - 0x117010
void entry_00116fb8_0x116fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116fb8_0x116fb8");
#endif

    switch (ctx->pc) {
        case 0x116fd0u: goto label_116fd0;
        default: break;
    }

    ctx->pc = 0x116fb8u;

    // 0x116fb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116fbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x116fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x116fc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x116fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x116fc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x116fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x116fc8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x116FC8u;
    SET_GPR_U32(ctx, 31, 0x116FD0u);
    ctx->pc = 0x116FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116FC8u;
    // 0x116fcc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x116FC8u, 0x116FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116FD0u;
label_116fd0:
    // 0x116fd0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x116fd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116fd4: 0x240424d0  addiu       $a0, $zero, 0x24D0
    ctx->pc = 0x116fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x116fd8: 0x2a42018  mult        $a0, $s5, $a0
    ctx->pc = 0x116fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x116fdc: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x116fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x116fe0: 0x2463c540  addiu       $v1, $v1, -0x3AC0
    ctx->pc = 0x116fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x116fe4: 0x24620ff0  addiu       $v0, $v1, 0xFF0
    ctx->pc = 0x116fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4080));
    // 0x116fe8: 0x246511c0  addiu       $a1, $v1, 0x11C0
    ctx->pc = 0x116fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4544));
    // 0x116fec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x116fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x116ff0: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x116ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x116ff4: 0x8c760fe8  lw          $s6, 0xFE8($v1)
    ctx->pc = 0x116ff4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    // 0x116ff8: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x116ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x116ffc: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x116ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x117000: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x117000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x117004: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x117004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x117008: 0x85a021  addu        $s4, $a0, $a1
    ctx->pc = 0x117008u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x11700c: 0x0  nop
    ctx->pc = 0x11700cu;
    // NOP
    ctx->pc = 0x117010u;
}
