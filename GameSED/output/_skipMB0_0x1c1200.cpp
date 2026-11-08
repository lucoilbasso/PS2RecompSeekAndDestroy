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

// Function: _skipMB0
// Address: 0x1c1200 - 0x1c12bc
void _skipMB0_0x1c1200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_skipMB0_0x1c1200");
#endif

    switch (ctx->pc) {
        case 0x1c1294u: goto label_1c1294;
        default: break;
    }

    ctx->pc = 0x1c1200u;

    // 0x1c1200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1204: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1c1204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1c1208: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c120c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c120cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1210: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c1214: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1c1214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1218: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1c1218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c121c: 0x8c820810  lw          $v0, 0x810($a0)
    ctx->pc = 0x1c121cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2064)));
    // 0x1c1220: 0x435018  mult        $t2, $v0, $v1
    ctx->pc = 0x1c1220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1c1224: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x1c1224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1c1228: 0xac4906cc  sw          $t1, 0x6CC($v0)
    ctx->pc = 0x1c1228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 9));
    // 0x1c122c: 0xac8901b0  sw          $t1, 0x1B0($a0)
    ctx->pc = 0x1c122cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 9));
    // 0x1c1230: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1c1230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1c1234: 0x54480006  bnel        $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1234u;
    {
        const bool branch_taken_0x1c1234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x1c1234) {
            ctx->pc = 0x1C1238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1234u;
            // 0x1c1238: 0x8c830174  lw          $v1, 0x174($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1250u;
            goto label_1c1250;
        }
    }
    ctx->pc = 0x1C123Cu;
    // 0x1c123c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1c123cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1c1240: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x1c1240u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x1c1244: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x1c1244u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x1c1248: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1c1248u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1c124c: 0x8c830174  lw          $v1, 0x174($a0)
    ctx->pc = 0x1c124cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
label_1c1250:
    // 0x1c1250: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c1250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1254: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1254u;
    {
        const bool branch_taken_0x1c1254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1254) {
            ctx->pc = 0x1C1258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1254u;
            // 0x1c1258: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1264u;
            goto label_1c1264;
        }
    }
    ctx->pc = 0x1C125Cu;
    // 0x1c125c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C125Cu;
    {
        const bool branch_taken_0x1c125c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C125Cu;
        // 0x1c1260: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c125c) {
            ctx->pc = 0x1C1278u;
            goto label_1c1278;
        }
    }
    ctx->pc = 0x1C1264u;
label_1c1264:
    // 0x1c1264: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x1c1264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x1c1268: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1c1268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1c126c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c126cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c1270: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1c1270u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1c1274: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1c1274u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_1c1278:
    // 0x1c1278: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x1c1278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1c127c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1280: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1280u;
    {
        const bool branch_taken_0x1c1280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1280) {
            ctx->pc = 0x1C1284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1280u;
            // 0x1c1284: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C129Cu;
            goto label_1c129c;
        }
    }
    ctx->pc = 0x1C1288u;
    // 0x1c1288: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1c1288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1c128c: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C128Cu;
    SET_GPR_U32(ctx, 31, 0x1C1294u);
    ctx->pc = 0x1C1290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C128Cu;
    // 0x1c1290: 0x24a5b5d0  addiu       $a1, $a1, -0x4A30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C128Cu, 0x1C1294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1294u;
label_1c1294:
    // 0x1c1294: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c1294u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1298: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c1298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c129c:
    // 0x1c129c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x1c129cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1c12a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c12a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c12a4: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x1c12a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12a8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c12a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c12ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1c12acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1c12b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c12b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c12b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C12B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12B4u;
        // 0x1c12b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C12B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C12BCu;
}
