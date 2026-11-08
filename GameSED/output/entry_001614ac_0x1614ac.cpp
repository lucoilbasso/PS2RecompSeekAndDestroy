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

// Function: entry_001614ac
// Address: 0x1614ac - 0x161538
void entry_001614ac_0x1614ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001614ac_0x1614ac");
#endif

    switch (ctx->pc) {
        case 0x1614f4u: goto label_1614f4;
        case 0x16152cu: goto label_16152c;
        default: break;
    }

    ctx->pc = 0x1614acu;

    // 0x1614ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1614acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1614b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1614b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1614b4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1614b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1614b8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1614b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1614bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1614bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1614c0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1614C0u;
    {
        const bool branch_taken_0x1614c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1614C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1614C0u;
        // 0x1614c4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1614c0) {
            ctx->pc = 0x161574u;
            return;
        }
    }
    ctx->pc = 0x1614C8u;
    // 0x1614c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1614c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1614cc: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1614CCu;
    {
        const bool branch_taken_0x1614cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1614cc) {
            ctx->pc = 0x1614D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1614CCu;
            // 0x1614d0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161578u;
            return;
        }
    }
    ctx->pc = 0x1614D4u;
    // 0x1614d4: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x1614d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
    // 0x1614d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1614d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1614dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1614dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1614e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1614e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1614e4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1614e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1614e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1614e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1614ec: 0xc0618da  jal         func_186368
    ctx->pc = 0x1614ECu;
    SET_GPR_U32(ctx, 31, 0x1614F4u);
    ctx->pc = 0x1614F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1614ECu;
    // 0x1614f0: 0x8c510034  lw          $s1, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x1614ECu, 0x1614F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1614F4u;
label_1614f4:
    // 0x1614f4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1614f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1614f8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1614F8u;
    {
        const bool branch_taken_0x1614f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1614FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1614F8u;
        // 0x1614fc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1614f8) {
            ctx->pc = 0x161558u;
            return;
        }
    }
    ctx->pc = 0x161500u;
    // 0x161500: 0x8e07004c  lw          $a3, 0x4C($s0)
    ctx->pc = 0x161500u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x161504: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x161504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x161508: 0x8e080048  lw          $t0, 0x48($s0)
    ctx->pc = 0x161508u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x16150c: 0x102282a  slt         $a1, $t0, $v0
    ctx->pc = 0x16150cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x161510: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x161510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x161514: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x161514u;
    {
        const bool branch_taken_0x161514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161514u;
        // 0x161518: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161514) {
            ctx->pc = 0x161538u;
            return;
        }
    }
    ctx->pc = 0x16151Cu;
    // 0x16151c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x16151cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161520: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x161520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161524: 0xc0618da  jal         func_186368
    ctx->pc = 0x161524u;
    SET_GPR_U32(ctx, 31, 0x16152Cu);
    ctx->pc = 0x161528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161524u;
    // 0x161528: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x161524u, 0x16152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16152Cu;
label_16152c:
    // 0x16152c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16152Cu;
    {
        const bool branch_taken_0x16152c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16152Cu;
        // 0x161530: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16152c) {
            ctx->pc = 0x161558u;
            return;
        }
    }
    ctx->pc = 0x161534u;
    // 0x161534: 0x0  nop
    ctx->pc = 0x161534u;
    // NOP
    ctx->pc = 0x161538u;
}
