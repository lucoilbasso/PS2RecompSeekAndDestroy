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

// Function: entry_00177088
// Address: 0x177088 - 0x1770f8
void entry_00177088_0x177088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177088_0x177088");
#endif

    switch (ctx->pc) {
        case 0x17709cu: goto label_17709c;
        case 0x1770d4u: goto label_1770d4;
        default: break;
    }

    ctx->pc = 0x177088u;

    // 0x177088: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x177088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x17708c: 0x3c100027  lui         $s0, 0x27
    ctx->pc = 0x17708cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)39 << 16));
    // 0x177090: 0x248478d0  addiu       $a0, $a0, 0x78D0
    ctx->pc = 0x177090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30928));
    // 0x177094: 0xc0686ba  jal         func_1A1AE8
    ctx->pc = 0x177094u;
    SET_GPR_U32(ctx, 31, 0x17709Cu);
    ctx->pc = 0x177098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177094u;
    // 0x177098: 0x2610cf00  addiu       $s0, $s0, -0x3100 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1AE8u, 0x177094u, 0x17709Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17709Cu;
label_17709c:
    // 0x17709c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x17709cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1770a0: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x1770a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1770a4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1770a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1770a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1770a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1770ac: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1770acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1770b0: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x1770b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1770b4: 0x86470004  lh          $a3, 0x4($s2)
    ctx->pc = 0x1770b4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1770b8: 0x862b0006  lh          $t3, 0x6($s1)
    ctx->pc = 0x1770b8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1770bc: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x1770bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1770c0: 0x86460002  lh          $a2, 0x2($s2)
    ctx->pc = 0x1770c0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1770c4: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x1770c4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1770c8: 0x86290002  lh          $t1, 0x2($s1)
    ctx->pc = 0x1770c8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1770cc: 0xc06ac76  jal         func_1AB1D8
    ctx->pc = 0x1770CCu;
    SET_GPR_U32(ctx, 31, 0x1770D4u);
    ctx->pc = 0x1770D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1770CCu;
    // 0x1770d0: 0x862a0004  lh          $t2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB1D8u, 0x1770CCu, 0x1770D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1770D4u;
label_1770d4:
    // 0x1770d4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1770d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1770d8: 0x2631024  and         $v0, $s3, $v1
    ctx->pc = 0x1770d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x1770dc: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1770DCu;
    {
        const bool branch_taken_0x1770dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1770dc) {
            ctx->pc = 0x1770E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1770DCu;
            // 0x1770e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1770F8u;
            return;
        }
    }
    ctx->pc = 0x1770E4u;
    // 0x1770e4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1770e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1770e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1770e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1770ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1770ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1770f0: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x1770f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x1770f4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1770f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->pc = 0x1770f8u;
}
