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

// Function: entry_001542fc
// Address: 0x1542fc - 0x154360
void entry_001542fc_0x1542fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001542fc_0x1542fc");
#endif

    switch (ctx->pc) {
        case 0x154310u: goto label_154310;
        case 0x154324u: goto label_154324;
        default: break;
    }

    ctx->pc = 0x1542fcu;

    // 0x1542fc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1542fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x154300: 0x14e20017  bne         $a3, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x154300u;
    {
        const bool branch_taken_0x154300 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x154300) {
            ctx->pc = 0x154360u;
            return;
        }
    }
    ctx->pc = 0x154308u;
    // 0x154308: 0xc04566c  jal         func_1159B0
    ctx->pc = 0x154308u;
    SET_GPR_U32(ctx, 31, 0x154310u);
    ctx->pc = 0x15430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154308u;
    // 0x15430c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159B0u, 0x154308u, 0x154310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154310u;
label_154310:
    // 0x154310: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x154310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154314: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x154314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154318: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x154318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15431c: 0xc0538fe  jal         func_14E3F8
    ctx->pc = 0x15431Cu;
    SET_GPR_U32(ctx, 31, 0x154324u);
    ctx->pc = 0x154320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15431Cu;
    // 0x154320: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F8u, 0x15431Cu, 0x154324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154324u;
label_154324:
    // 0x154324: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x154324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x154328: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x154328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15432c: 0x8ca20c04  lw          $v0, 0xC04($a1)
    ctx->pc = 0x15432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3076)));
    // 0x154330: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x154330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x154334: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x154334u;
    {
        const bool branch_taken_0x154334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154334u;
        // 0x154338: 0xaca20c04  sw          $v0, 0xC04($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 3076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154334) {
            ctx->pc = 0x15442Cu;
            return;
        }
    }
    ctx->pc = 0x15433Cu;
    // 0x15433c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x15433cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x154340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x154340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154344: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x154344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x154348: 0x24841208  addiu       $a0, $a0, 0x1208
    ctx->pc = 0x154348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    // 0x15434c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15434cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154350: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x154350u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x154354: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x154354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154358: 0x80685b8  j           func_1A16E0
    ctx->pc = 0x154358u;
    ctx->pc = 0x15435Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154358u;
    // 0x15435c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    BJobReleaseObject__FP5BcJobP5BcObj_0x1a16e0(rdram, ctx, runtime); return;
    ctx->pc = 0x154360u;
}
