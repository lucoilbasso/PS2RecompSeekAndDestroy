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

// Function: SetPolygonPacket__7WcFrameP10Q_WORDDATAUiP7Color32P9IVector32b
// Address: 0x1937a0 - 0x193848
void SetPolygonPacket__7WcFrameP10Q_WORDDATAUiP7Color32P9IVector32b_0x1937a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPolygonPacket__7WcFrameP10Q_WORDDATAUiP7Color32P9IVector32b_0x1937a0");
#endif

    switch (ctx->pc) {
        case 0x1937f0u: goto label_1937f0;
        default: break;
    }

    ctx->pc = 0x1937a0u;

    // 0x1937a0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1937a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1937a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1937a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1937a8: 0x34428004  ori         $v0, $v0, 0x8004
    ctx->pc = 0x1937a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32772);
    // 0x1937ac: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x1937acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x1937b0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1937b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1937b4: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x1937b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1937b8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1937b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1937bc: 0x31ff8  dsll        $v1, $v1, 31
    ctx->pc = 0x1937bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 31);
    // 0x1937c0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1937c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1937c4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1937c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1937c8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1937c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1937cc: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x1937ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x1937d0: 0x2466ef18  addiu       $a2, $v1, -0x10E8
    ctx->pc = 0x1937d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962968));
    // 0x1937d4: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x1937d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x1937d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1937d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1937dc: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x1937dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1937e0: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x1937e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x1937e4: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1937e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1937e8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1937e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1937ec: 0x0  nop
    ctx->pc = 0x1937ecu;
    // NOP
label_1937f0:
    // 0x1937f0: 0x152c0003  bne         $t1, $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1937F0u;
    {
        const bool branch_taken_0x1937f0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 12));
        ctx->pc = 0x1937F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937F0u;
        // 0x1937f4: 0xc500000c  lwc1        $f0, 0xC($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937f0) {
            ctx->pc = 0x193800u;
            goto label_193800;
        }
    }
    ctx->pc = 0x1937F8u;
    // 0x1937f8: 0x90820007  lbu         $v0, 0x7($a0)
    ctx->pc = 0x1937f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x1937fc: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x1937fcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
label_193800:
    // 0x193800: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x193800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x193804: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x193804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x193808: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x193808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19380c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x19380cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x193810: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x193810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x193814: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x193814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x193818: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x193818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x19381c: 0xfc4b0008  sd          $t3, 0x8($v0)
    ctx->pc = 0x19381cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 11));
    // 0x193820: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x193820u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193824: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x193824u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x193828: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x193828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19382c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x19382cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x193830: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x193830u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x193834: 0xad42000c  sw          $v0, 0xC($t2)
    ctx->pc = 0x193834u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
    // 0x193838: 0x4a1ffed  bgez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x193838u;
    {
        const bool branch_taken_0x193838 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x19383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193838u;
        // 0x19383c: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193838) {
            ctx->pc = 0x1937F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1937f0;
        }
    }
    ctx->pc = 0x193840u;
    // 0x193840: 0x3e00008  jr          $ra
    ctx->pc = 0x193840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193840u;
        // 0x193844: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193848u;
}
