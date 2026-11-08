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

// Function: sceSifSearchModuleByName
// Address: 0x1b61f8 - 0x1b6298
void sceSifSearchModuleByName_0x1b61f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifSearchModuleByName_0x1b61f8");
#endif

    switch (ctx->pc) {
        case 0x1b620cu: goto label_1b620c;
        case 0x1b621cu: goto label_1b621c;
        case 0x1b6244u: goto label_1b6244;
        case 0x1b6278u: goto label_1b6278;
        default: break;
    }

    ctx->pc = 0x1b61f8u;

    // 0x1b61f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b61f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b61fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b61fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b6200: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b6200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b6204: 0xc06d6e4  jal         func_1B5B90
    ctx->pc = 0x1B6204u;
    SET_GPR_U32(ctx, 31, 0x1B620Cu);
    ctx->pc = 0x1B6208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6204u;
    // 0x1b6208: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5B90u, 0x1B6204u, 0x1B620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B620Cu;
label_1b620c:
    // 0x1b620c: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B620Cu;
    {
        const bool branch_taken_0x1b620c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B6210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B620Cu;
        // 0x1b6210: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b620c) {
            ctx->pc = 0x1B6288u;
            goto label_1b6288;
        }
    }
    ctx->pc = 0x1B6214u;
    // 0x1b6214: 0xc06d724  jal         func_1B5C90
    ctx->pc = 0x1B6214u;
    SET_GPR_U32(ctx, 31, 0x1B621Cu);
    ctx->pc = 0x1B5C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5C90u, 0x1B6214u, 0x1B621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B621Cu;
label_1b621c:
    // 0x1b621c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B621Cu;
    {
        const bool branch_taken_0x1b621c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b621c) {
            ctx->pc = 0x1B6220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B621Cu;
            // 0x1b6220: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6230u;
            goto label_1b6230;
        }
    }
    ctx->pc = 0x1B6224u;
    // 0x1b6224: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b6224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b6228: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B6228u;
    {
        const bool branch_taken_0x1b6228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6228u;
        // 0x1b622c: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6228) {
            ctx->pc = 0x1B6288u;
            goto label_1b6288;
        }
    }
    ctx->pc = 0x1B6230u;
label_1b6230:
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
            goto label_1b6288;
        }
    }
    ctx->pc = 0x1B6280u;
    // 0x1b6280: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b6280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b6284: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b6284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b6288:
    // 0x1b6288: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b6288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b628c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b628cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6290: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6290u;
        // 0x1b6294: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6298u;
}
