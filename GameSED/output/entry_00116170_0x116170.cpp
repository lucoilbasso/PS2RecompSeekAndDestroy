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

// Function: entry_00116170
// Address: 0x116170 - 0x1161b8
void entry_00116170_0x116170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116170_0x116170");
#endif

    switch (ctx->pc) {
        case 0x116184u: goto label_116184;
        default: break;
    }

    ctx->pc = 0x116170u;

    // 0x116170: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x116170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x116174: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x116174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x116178: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x116178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x11617c: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11617Cu;
    SET_GPR_U32(ctx, 31, 0x116184u);
    ctx->pc = 0x116180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11617Cu;
    // 0x116180: 0x3c1e0025  lui         $fp, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)37 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11617Cu, 0x116184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116184u;
label_116184:
    // 0x116184: 0x240324d0  addiu       $v1, $zero, 0x24D0
    ctx->pc = 0x116184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x116188: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x116188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11618c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x11618cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x116190: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x116190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x116194: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x116194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x116198: 0x2473d370  addiu       $s3, $v1, -0x2C90
    ctx->pc = 0x116198u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955888));
    // 0x11619c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x11619cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1161a0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1161a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1161a4: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x1161a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x1161a8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1161a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1161ac: 0x4a02b  sltu        $s4, $zero, $a0
    ctx->pc = 0x1161acu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1161b0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1161b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1161b4: 0x0  nop
    ctx->pc = 0x1161b4u;
    // NOP
    ctx->pc = 0x1161b8u;
}
