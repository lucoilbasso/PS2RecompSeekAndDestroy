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

// Function: entry_001172fc
// Address: 0x1172fc - 0x117358
void entry_001172fc_0x1172fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001172fc_0x1172fc");
#endif

    switch (ctx->pc) {
        case 0x117310u: goto label_117310;
        case 0x11731cu: goto label_11731c;
        case 0x117328u: goto label_117328;
        default: break;
    }

    ctx->pc = 0x1172fcu;

    // 0x1172fc: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1172fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x117300: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x117300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x117304: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x117304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x117308: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x117308u;
    SET_GPR_U32(ctx, 31, 0x117310u);
    ctx->pc = 0x11730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117308u;
    // 0x11730c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x117308u, 0x117310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117310u;
label_117310:
    // 0x117310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117314: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x117314u;
    SET_GPR_U32(ctx, 31, 0x11731Cu);
    ctx->pc = 0x117318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117314u;
    // 0x117318: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x117314u, 0x11731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11731Cu;
label_11731c:
    // 0x11731c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11731cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117320: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x117320u;
    SET_GPR_U32(ctx, 31, 0x117328u);
    ctx->pc = 0x117324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117320u;
    // 0x117324: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x117320u, 0x117328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117328u;
label_117328:
    // 0x117328: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x117328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x11732c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11732cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x117330: 0x2463c540  addiu       $v1, $v1, -0x3AC0
    ctx->pc = 0x117330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x117334: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x117334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117338: 0x8c640fe8  lw          $a0, 0xFE8($v1)
    ctx->pc = 0x117338u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1ED528u));
    // 0x11733c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x11733cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117340: 0x8c620fec  lw          $v0, 0xFEC($v1)
    ctx->pc = 0x117340u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1ED52Cu));
    // 0x117344: 0x27b10012  addiu       $s1, $sp, 0x12
    ctx->pc = 0x117344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 18));
    // 0x117348: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x117348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x11734c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x11734cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x117350: 0xa7a50010  sh          $a1, 0x10($sp)
    ctx->pc = 0x117350u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 5));
    // 0x117354: 0x0  nop
    ctx->pc = 0x117354u;
    // NOP
    ctx->pc = 0x117358u;
}
