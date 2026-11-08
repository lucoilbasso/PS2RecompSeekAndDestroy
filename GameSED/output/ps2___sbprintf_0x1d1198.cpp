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

// Function: __sbprintf
// Address: 0x1d1198 - 0x1d124c
void ps2___sbprintf_0x1d1198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sbprintf_0x1d1198");
#endif

    switch (ctx->pc) {
        case 0x1d11fcu: goto label_1d11fc;
        case 0x1d1210u: goto label_1d1210;
        default: break;
    }

    ctx->pc = 0x1d1198u;

    // 0x1d1198: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x1d1198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
    // 0x1d119c: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x1d119cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1d11a0: 0xffb00460  sd          $s0, 0x460($sp)
    ctx->pc = 0x1d11a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 16));
    // 0x1d11a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d11a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d11a8: 0xffb10468  sd          $s1, 0x468($sp)
    ctx->pc = 0x1d11a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 17));
    // 0x1d11ac: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x1d11acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d11b0: 0xffbf0470  sd          $ra, 0x470($sp)
    ctx->pc = 0x1d11b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 31));
    // 0x1d11b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d11b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d11b8: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x1d11b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x1d11bc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1d11bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d11c0: 0x9609000e  lhu         $t1, 0xE($s0)
    ctx->pc = 0x1d11c0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1d11c4: 0x8e080054  lw          $t0, 0x54($s0)
    ctx->pc = 0x1d11c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1d11c8: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x1d11c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x1d11cc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d11ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1d11d0: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x1d11d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d11d4: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x1d11d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x1d11d8: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x1d11d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d11dc: 0xa7a9000e  sh          $t1, 0xE($sp)
    ctx->pc = 0x1d11dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 9));
    // 0x1d11e0: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x1d11e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x1d11e4: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x1d11e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x1d11e8: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x1d11e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x1d11ec: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x1d11ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x1d11f0: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x1d11f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x1d11f4: 0xc074494  jal         func_1D1250
    ctx->pc = 0x1D11F4u;
    SET_GPR_U32(ctx, 31, 0x1D11FCu);
    ctx->pc = 0x1D11F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D11F4u;
    // 0x1d11f8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1250u, 0x1D11F4u, 0x1D11FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11FCu;
label_1d11fc:
    // 0x1d11fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d11fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1200: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1200u;
    {
        const bool branch_taken_0x1d1200 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1D1204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1200u;
        // 0x1d1204: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1200) {
            ctx->pc = 0x1D1218u;
            goto label_1d1218;
        }
    }
    ctx->pc = 0x1D1208u;
    // 0x1d1208: 0xc07508c  jal         func_1D4230
    ctx->pc = 0x1D1208u;
    SET_GPR_U32(ctx, 31, 0x1D1210u);
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1D1208u, 0x1D1210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1210u;
label_1d1210:
    // 0x1d1210: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d1210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1214: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1d1214u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_1d1218:
    // 0x1d1218: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x1d1218u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1d121c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1d121cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1d1220: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1220u;
    {
        const bool branch_taken_0x1d1220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1220u;
        // 0x1d1224: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1220) {
            ctx->pc = 0x1D1238u;
            goto label_1d1238;
        }
    }
    ctx->pc = 0x1D1228u;
    // 0x1d1228: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1d1228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d122c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1d122cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1d1230: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1d1230u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d1234: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d1234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d1238:
    // 0x1d1238: 0xdfb00460  ld          $s0, 0x460($sp)
    ctx->pc = 0x1d1238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x1d123c: 0xdfb10468  ld          $s1, 0x468($sp)
    ctx->pc = 0x1d123cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x1d1240: 0xdfbf0470  ld          $ra, 0x470($sp)
    ctx->pc = 0x1d1240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x1d1244: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1244u;
        // 0x1d1248: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D124Cu;
}
