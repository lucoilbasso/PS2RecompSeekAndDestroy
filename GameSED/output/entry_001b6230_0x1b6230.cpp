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

// Function: entry_001b6230
// Address: 0x1b6230 - 0x1b6288
void entry_001b6230_0x1b6230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6230_0x1b6230");
#endif

    switch (ctx->pc) {
        case 0x1b6244u: goto label_1b6244;
        case 0x1b6278u: goto label_1b6278;
        default: break;
    }

    ctx->pc = 0x1b6230u;

    // 0x1b6230: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b6230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6234: 0x2450b408  addiu       $s0, $v0, -0x4BF8
    ctx->pc = 0x1b6234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947848));
    // 0x1b6238: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x1b6238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1b623c: 0xc07434a  jal         func_1D0D28
    ctx->pc = 0x1B623Cu;
    SET_GPR_U32(ctx, 31, 0x1B6244u);
    ctx->pc = 0x1B6240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B623Cu;
    // 0x1b6240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D28u, 0x1B623Cu, 0x1B6244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6244u;
label_1b6244:
    // 0x1b6244: 0x2603fff8  addiu       $v1, $s0, -0x8
    ctx->pc = 0x1b6244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1b6248: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b6248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b624c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1b624cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6250: 0xa0600103  sb          $zero, 0x103($v1)
    ctx->pc = 0x1b6250u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6254: 0x2484b600  addiu       $a0, $a0, -0x4A00
    ctx->pc = 0x1b6254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948352));
    // 0x1b6258: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b6258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b625c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b625cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b6260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b6260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6264: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1b6264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b6268: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1b6268u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b626c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b626cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b6270: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B6270u;
    SET_GPR_U32(ctx, 31, 0x1B6278u);
    ctx->pc = 0x1B6274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6270u;
    // 0x1b6274: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B6270u, 0x1B6278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6278u;
label_1b6278:
    // 0x1b6278: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6278u;
    {
        const bool branch_taken_0x1b6278 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b6278) {
            ctx->pc = 0x1B627Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6278u;
            // 0x1b627c: 0x8e02fff8  lw          $v0, -0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6288u;
            return;
        }
    }
    ctx->pc = 0x1B6280u;
    // 0x1b6280: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b6280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b6284: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b6284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1b6288u;
}
