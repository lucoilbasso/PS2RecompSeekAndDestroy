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

// Function: BObjListRemoveCell__FP8BObjList
// Address: 0x1a11d0 - 0x1a1280
void BObjListRemoveCell__FP8BObjList_0x1a11d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BObjListRemoveCell__FP8BObjList_0x1a11d0");
#endif

    switch (ctx->pc) {
        case 0x1a1210u: goto label_1a1210;
        default: break;
    }

    ctx->pc = 0x1a11d0u;

    // 0x1a11d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a11d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a11d4: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1a11d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x1a11d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a11d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a11dc: 0x2450e530  addiu       $s0, $v0, -0x1AD0
    ctx->pc = 0x1a11dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960432));
    // 0x1a11e0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a11e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a11e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a11e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a11e8: 0x8c422c08  lw          $v0, 0x2C08($v0)
    ctx->pc = 0x1a11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281138u));
    // 0x1a11ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a11ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a11f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a11f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a11f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a11f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a11f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A11F8u;
    {
        const bool branch_taken_0x1a11f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11F8u;
        // 0x1a11fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a11f8) {
            ctx->pc = 0x1A1218u;
            goto label_1a1218;
        }
    }
    ctx->pc = 0x1A1200u;
    // 0x1a1200: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a1200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a1204: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1a1204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a1208: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A1208u;
    SET_GPR_U32(ctx, 31, 0x1A1210u);
    ctx->pc = 0x1A120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1208u;
    // 0x1a120c: 0x24a58888  addiu       $a1, $a1, -0x7778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A1208u, 0x1A1210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1210u;
label_1a1210:
    // 0x1a1210: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1210u;
    {
        const bool branch_taken_0x1a1210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1210) {
            ctx->pc = 0x1A1228u;
            goto label_1a1228;
        }
    }
    ctx->pc = 0x1A1218u;
label_1a1218:
    // 0x1a1218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a121c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a121cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1220: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1220u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a1224: 0xac222c08  sw          $v0, 0x2C08($at)
    ctx->pc = 0x1a1224u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11272), GPR_U32(ctx, 2));
label_1a1228:
    // 0x1a1228: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a1228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a122c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a122cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a1230: 0x8c422c04  lw          $v0, 0x2C04($v0)
    ctx->pc = 0x1a1230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x1a1234: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a1234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1a1238: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a1238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a123c: 0x8c632c00  lw          $v1, 0x2C00($v1)
    ctx->pc = 0x1a123cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11264)));
    // 0x1a1240: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a1240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a1244: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1248: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1248u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a124c: 0xac202c08  sw          $zero, 0x2C08($at)
    ctx->pc = 0x1a124cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11272), GPR_U32(ctx, 0));
    // 0x1a1250: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1a1250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1a1254: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1258: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1258u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a125c: 0xac222c04  sw          $v0, 0x2C04($at)
    ctx->pc = 0x1a125cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11268), GPR_U32(ctx, 2));
    // 0x1a1260: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1264: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1264u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a1268: 0xac312c00  sw          $s1, 0x2C00($at)
    ctx->pc = 0x1a1268u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11264), GPR_U32(ctx, 17));
    // 0x1a126c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a126cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1274: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1278: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1278u;
        // 0x1a127c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1280u;
}
