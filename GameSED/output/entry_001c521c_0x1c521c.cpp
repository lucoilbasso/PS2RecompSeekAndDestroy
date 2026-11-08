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

// Function: entry_001c521c
// Address: 0x1c521c - 0x1c5288
void entry_001c521c_0x1c521c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c521c_0x1c521c");
#endif

    switch (ctx->pc) {
        case 0x1c5230u: goto label_1c5230;
        case 0x1c5270u: goto label_1c5270;
        default: break;
    }

    ctx->pc = 0x1c521cu;

    // 0x1c521c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c521cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5220: 0x2610ef04  addiu       $s0, $s0, -0x10FC
    ctx->pc = 0x1c5220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962948));
    // 0x1c5224: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x1c5224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1c5228: 0xc07434a  jal         func_1D0D28
    ctx->pc = 0x1C5228u;
    SET_GPR_U32(ctx, 31, 0x1C5230u);
    ctx->pc = 0x1C522Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5228u;
    // 0x1c522c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D28u, 0x1C5228u, 0x1C5230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5230u;
label_1c5230:
    // 0x1c5230: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x1c5230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x1c5234: 0xae14ffec  sw          $s4, -0x14($s0)
    ctx->pc = 0x1c5234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 20));
    // 0x1c5238: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x1c5238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x1c523c: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1c523cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x1c5240: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x1c5240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
    // 0x1c5244: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c5244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5248: 0xa0600413  sb          $zero, 0x413($v1)
    ctx->pc = 0x1c5248u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c524c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1c524cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5250: 0x25290400  addiu       $t1, $t1, 0x400
    ctx->pc = 0x1c5250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x1c5254: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c5254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5258: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c5258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c525c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c525cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5260: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1c5260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1c5264: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1c5264u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c5268: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C5268u;
    SET_GPR_U32(ctx, 31, 0x1C5270u);
    ctx->pc = 0x1C526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5268u;
    // 0x1c526c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C5268u, 0x1C5270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5270u;
label_1c5270:
    // 0x1c5270: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c5270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5274: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5274u;
    {
        const bool branch_taken_0x1c5274 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5274u;
        // 0x1c5278: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5274) {
            ctx->pc = 0x1C5288u;
            return;
        }
    }
    ctx->pc = 0x1C527Cu;
    // 0x1c527c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c527cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5280: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5280u;
    {
        const bool branch_taken_0x1c5280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5280u;
        // 0x1c5284: 0xac62ddf8  sw          $v0, -0x2208($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5280) {
            ctx->pc = 0x1C5290u;
            return;
        }
    }
    ctx->pc = 0x1C5288u;
}
