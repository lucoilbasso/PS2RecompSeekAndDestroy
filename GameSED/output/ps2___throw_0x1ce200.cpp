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

// Function: __throw
// Address: 0x1ce200 - 0x1ce350
void ps2___throw_0x1ce200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___throw_0x1ce200");
#endif

    switch (ctx->pc) {
        case 0x1ce200u: goto label_1ce200;
        case 0x1ce204u: goto label_1ce204;
        case 0x1ce208u: goto label_1ce208;
        case 0x1ce20cu: goto label_1ce20c;
        case 0x1ce210u: goto label_1ce210;
        case 0x1ce214u: goto label_1ce214;
        case 0x1ce218u: goto label_1ce218;
        case 0x1ce21cu: goto label_1ce21c;
        case 0x1ce220u: goto label_1ce220;
        case 0x1ce224u: goto label_1ce224;
        case 0x1ce228u: goto label_1ce228;
        case 0x1ce22cu: goto label_1ce22c;
        case 0x1ce230u: goto label_1ce230;
        case 0x1ce234u: goto label_1ce234;
        case 0x1ce238u: goto label_1ce238;
        case 0x1ce23cu: goto label_1ce23c;
        case 0x1ce240u: goto label_1ce240;
        case 0x1ce244u: goto label_1ce244;
        case 0x1ce248u: goto label_1ce248;
        case 0x1ce24cu: goto label_1ce24c;
        case 0x1ce250u: goto label_1ce250;
        case 0x1ce254u: goto label_1ce254;
        case 0x1ce258u: goto label_1ce258;
        case 0x1ce25cu: goto label_1ce25c;
        case 0x1ce260u: goto label_1ce260;
        case 0x1ce264u: goto label_1ce264;
        case 0x1ce268u: goto label_1ce268;
        case 0x1ce26cu: goto label_1ce26c;
        case 0x1ce270u: goto label_1ce270;
        case 0x1ce274u: goto label_1ce274;
        case 0x1ce278u: goto label_1ce278;
        case 0x1ce27cu: goto label_1ce27c;
        case 0x1ce280u: goto label_1ce280;
        case 0x1ce284u: goto label_1ce284;
        case 0x1ce288u: goto label_1ce288;
        case 0x1ce28cu: goto label_1ce28c;
        case 0x1ce290u: goto label_1ce290;
        case 0x1ce294u: goto label_1ce294;
        case 0x1ce298u: goto label_1ce298;
        case 0x1ce29cu: goto label_1ce29c;
        case 0x1ce2a0u: goto label_1ce2a0;
        case 0x1ce2a4u: goto label_1ce2a4;
        case 0x1ce2a8u: goto label_1ce2a8;
        case 0x1ce2acu: goto label_1ce2ac;
        case 0x1ce2b0u: goto label_1ce2b0;
        case 0x1ce2b4u: goto label_1ce2b4;
        case 0x1ce2b8u: goto label_1ce2b8;
        case 0x1ce2bcu: goto label_1ce2bc;
        case 0x1ce2c0u: goto label_1ce2c0;
        case 0x1ce2c4u: goto label_1ce2c4;
        case 0x1ce2c8u: goto label_1ce2c8;
        case 0x1ce2ccu: goto label_1ce2cc;
        case 0x1ce2d0u: goto label_1ce2d0;
        case 0x1ce2d4u: goto label_1ce2d4;
        case 0x1ce2d8u: goto label_1ce2d8;
        case 0x1ce2dcu: goto label_1ce2dc;
        case 0x1ce2e0u: goto label_1ce2e0;
        case 0x1ce2e4u: goto label_1ce2e4;
        case 0x1ce2e8u: goto label_1ce2e8;
        case 0x1ce2ecu: goto label_1ce2ec;
        case 0x1ce2f0u: goto label_1ce2f0;
        case 0x1ce2f4u: goto label_1ce2f4;
        case 0x1ce2f8u: goto label_1ce2f8;
        case 0x1ce2fcu: goto label_1ce2fc;
        case 0x1ce300u: goto label_1ce300;
        case 0x1ce304u: goto label_1ce304;
        case 0x1ce308u: goto label_1ce308;
        case 0x1ce30cu: goto label_1ce30c;
        case 0x1ce310u: goto label_1ce310;
        case 0x1ce314u: goto label_1ce314;
        case 0x1ce318u: goto label_1ce318;
        case 0x1ce31cu: goto label_1ce31c;
        case 0x1ce320u: goto label_1ce320;
        case 0x1ce324u: goto label_1ce324;
        case 0x1ce328u: goto label_1ce328;
        case 0x1ce32cu: goto label_1ce32c;
        case 0x1ce330u: goto label_1ce330;
        case 0x1ce334u: goto label_1ce334;
        case 0x1ce338u: goto label_1ce338;
        case 0x1ce33cu: goto label_1ce33c;
        case 0x1ce340u: goto label_1ce340;
        case 0x1ce344u: goto label_1ce344;
        case 0x1ce348u: goto label_1ce348;
        case 0x1ce34cu: goto label_1ce34c;
        default: break;
    }

    ctx->pc = 0x1ce200u;

label_1ce200:
    // 0x1ce200: 0x27bdfa70  addiu       $sp, $sp, -0x590
    ctx->pc = 0x1ce200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965872));
label_1ce204:
    // 0x1ce204: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1ce204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1ce208:
    // 0x1ce208: 0x7fbe0510  sq          $fp, 0x510($sp)
    ctx->pc = 0x1ce208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 30));
label_1ce20c:
    // 0x1ce20c: 0x7fb00490  sq          $s0, 0x490($sp)
    ctx->pc = 0x1ce20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 16));
label_1ce210:
    // 0x1ce210: 0x7fb104a0  sq          $s1, 0x4A0($sp)
    ctx->pc = 0x1ce210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 17));
label_1ce214:
    // 0x1ce214: 0x7fb204b0  sq          $s2, 0x4B0($sp)
    ctx->pc = 0x1ce214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 18));
label_1ce218:
    // 0x1ce218: 0x7fb304c0  sq          $s3, 0x4C0($sp)
    ctx->pc = 0x1ce218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 19));
label_1ce21c:
    // 0x1ce21c: 0x7fb404d0  sq          $s4, 0x4D0($sp)
    ctx->pc = 0x1ce21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 20));
label_1ce220:
    // 0x1ce220: 0x7fb504e0  sq          $s5, 0x4E0($sp)
    ctx->pc = 0x1ce220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 21));
label_1ce224:
    // 0x1ce224: 0x7fb604f0  sq          $s6, 0x4F0($sp)
    ctx->pc = 0x1ce224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 22));
label_1ce228:
    // 0x1ce228: 0x7fb70500  sq          $s7, 0x500($sp)
    ctx->pc = 0x1ce228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 23));
label_1ce22c:
    // 0x1ce22c: 0xffbf0520  sd          $ra, 0x520($sp)
    ctx->pc = 0x1ce22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1312), GPR_U64(ctx, 31));
label_1ce230:
    // 0x1ce230: 0xe7bf0580  swc1        $f31, 0x580($sp)
    ctx->pc = 0x1ce230u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1408), bits); }
label_1ce234:
    // 0x1ce234: 0xe7be0578  swc1        $f30, 0x578($sp)
    ctx->pc = 0x1ce234u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1400), bits); }
label_1ce238:
    // 0x1ce238: 0xe7bd0570  swc1        $f29, 0x570($sp)
    ctx->pc = 0x1ce238u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1392), bits); }
label_1ce23c:
    // 0x1ce23c: 0xe7bc0568  swc1        $f28, 0x568($sp)
    ctx->pc = 0x1ce23cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1384), bits); }
label_1ce240:
    // 0x1ce240: 0xe7bb0560  swc1        $f27, 0x560($sp)
    ctx->pc = 0x1ce240u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1376), bits); }
label_1ce244:
    // 0x1ce244: 0xe7ba0558  swc1        $f26, 0x558($sp)
    ctx->pc = 0x1ce244u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1368), bits); }
label_1ce248:
    // 0x1ce248: 0xe7b90550  swc1        $f25, 0x550($sp)
    ctx->pc = 0x1ce248u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1360), bits); }
label_1ce24c:
    // 0x1ce24c: 0xe7b80548  swc1        $f24, 0x548($sp)
    ctx->pc = 0x1ce24cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1352), bits); }
label_1ce250:
    // 0x1ce250: 0xe7b70540  swc1        $f23, 0x540($sp)
    ctx->pc = 0x1ce250u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
label_1ce254:
    // 0x1ce254: 0xe7b60538  swc1        $f22, 0x538($sp)
    ctx->pc = 0x1ce254u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1336), bits); }
label_1ce258:
    // 0x1ce258: 0xe7b50530  swc1        $f21, 0x530($sp)
    ctx->pc = 0x1ce258u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1328), bits); }
label_1ce25c:
    // 0x1ce25c: 0xe7b40528  swc1        $f20, 0x528($sp)
    ctx->pc = 0x1ce25cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1320), bits); }
label_1ce260:
    // 0x1ce260: 0x8c62de14  lw          $v0, -0x21EC($v1)
    ctx->pc = 0x1ce260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958612)));
label_1ce264:
    // 0x1ce264: 0x40f809  jalr        $v0
label_1ce268:
    if (ctx->pc == 0x1CE268u) {
        ctx->pc = 0x1CE268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE264u;
        // 0x1ce268: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE26Cu;
        goto label_1ce26c;
    }
    ctx->pc = 0x1CE264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE26Cu);
        ctx->pc = 0x1CE268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE264u;
        // 0x1ce268: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE264u, 0x1CE26Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CE26Cu;
label_1ce26c:
    // 0x1ce26c: 0xafde048c  sw          $fp, 0x48C($fp)
    ctx->pc = 0x1ce26cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1164), GPR_U32(ctx, 30));
label_1ce270:
    // 0x1ce270: 0xafc20488  sw          $v0, 0x488($fp)
    ctx->pc = 0x1ce270u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1160), GPR_U32(ctx, 2));
label_1ce274:
    // 0x1ce274: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ce274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ce278:
    // 0x1ce278: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1ce27c:
    if (ctx->pc == 0x1CE27Cu) {
        ctx->pc = 0x1CE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE278u;
        // 0x1ce27c: 0x3c02001d  lui         $v0, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE280u;
        goto label_1ce280;
    }
    ctx->pc = 0x1CE278u;
    {
        const bool branch_taken_0x1ce278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce278) {
            ctx->pc = 0x1CE27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE278u;
            // 0x1ce27c: 0x3c02001d  lui         $v0, 0x1D (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE28Cu;
            goto label_1ce28c;
        }
    }
    ctx->pc = 0x1CE280u;
label_1ce280:
    // 0x1ce280: 0xc073468  jal         func_1CD1A0
label_1ce284:
    if (ctx->pc == 0x1CE284u) {
        ctx->pc = 0x1CE288u;
        goto label_1ce288;
    }
    ctx->pc = 0x1CE280u;
    SET_GPR_U32(ctx, 31, 0x1CE288u);
    ctx->pc = 0x1CD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1A0u, 0x1CE280u, 0x1CE288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE288u;
label_1ce288:
    // 0x1ce288: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1ce288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
label_1ce28c:
    // 0x1ce28c: 0x8fc5048c  lw          $a1, 0x48C($fp)
    ctx->pc = 0x1ce28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1164)));
label_1ce290:
    // 0x1ce290: 0xc072eac  jal         func_1CBAB0
label_1ce294:
    if (ctx->pc == 0x1CE294u) {
        ctx->pc = 0x1CE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE290u;
        // 0x1ce294: 0x2444e288  addiu       $a0, $v0, -0x1D78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE298u;
        goto label_1ce298;
    }
    ctx->pc = 0x1CE290u;
    SET_GPR_U32(ctx, 31, 0x1CE298u);
    ctx->pc = 0x1CE294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE290u;
    // 0x1ce294: 0x2444e288  addiu       $a0, $v0, -0x1D78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBAB0u, 0x1CE290u, 0x1CE298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE298u;
label_1ce298:
    // 0x1ce298: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ce29c:
    if (ctx->pc == 0x1CE29Cu) {
        ctx->pc = 0x1CE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE298u;
        // 0x1ce29c: 0xafc2048c  sw          $v0, 0x48C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE2A0u;
        goto label_1ce2a0;
    }
    ctx->pc = 0x1CE298u;
    {
        const bool branch_taken_0x1ce298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE298u;
        // 0x1ce29c: 0xafc2048c  sw          $v0, 0x48C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce298) {
            ctx->pc = 0x1CE2B0u;
            goto label_1ce2b0;
        }
    }
    ctx->pc = 0x1CE2A0u;
label_1ce2a0:
    // 0x1ce2a0: 0xc073468  jal         func_1CD1A0
label_1ce2a4:
    if (ctx->pc == 0x1CE2A4u) {
        ctx->pc = 0x1CE2A8u;
        goto label_1ce2a8;
    }
    ctx->pc = 0x1CE2A0u;
    SET_GPR_U32(ctx, 31, 0x1CE2A8u);
    ctx->pc = 0x1CD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1A0u, 0x1CE2A0u, 0x1CE2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE2A8u;
label_1ce2a8:
    // 0x1ce2a8: 0x800008  jr          $a0
label_1ce2ac:
    if (ctx->pc == 0x1CE2ACu) {
        ctx->pc = 0x1CE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2A8u;
        // 0x1ce2ac: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE2B0u;
        goto label_1ce2b0;
    }
    ctx->pc = 0x1CE2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x1CE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2A8u;
        // 0x1ce2ac: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE2A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CE2B0u;
label_1ce2b0:
    // 0x1ce2b0: 0x8fc3048c  lw          $v1, 0x48C($fp)
    ctx->pc = 0x1ce2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1164)));
label_1ce2b4:
    // 0x1ce2b4: 0x27c20590  addiu       $v0, $fp, 0x590
    ctx->pc = 0x1ce2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1424));
label_1ce2b8:
    // 0x1ce2b8: 0x27c70480  addiu       $a3, $fp, 0x480
    ctx->pc = 0x1ce2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 1152));
label_1ce2bc:
    // 0x1ce2bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ce2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ce2c0:
    // 0x1ce2c0: 0x8fc50520  lw          $a1, 0x520($fp)
    ctx->pc = 0x1ce2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1312)));
label_1ce2c4:
    // 0x1ce2c4: 0x8fc40488  lw          $a0, 0x488($fp)
    ctx->pc = 0x1ce2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1160)));
label_1ce2c8:
    // 0x1ce2c8: 0x8fc6048c  lw          $a2, 0x48C($fp)
    ctx->pc = 0x1ce2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1164)));
label_1ce2cc:
    // 0x1ce2cc: 0xc07379c  jal         func_1CDE70
label_1ce2d0:
    if (ctx->pc == 0x1CE2D0u) {
        ctx->pc = 0x1CE2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2CCu;
        // 0x1ce2d0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE2D4u;
        goto label_1ce2d4;
    }
    ctx->pc = 0x1CE2CCu;
    SET_GPR_U32(ctx, 31, 0x1CE2D4u);
    ctx->pc = 0x1CE2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE2CCu;
    // 0x1ce2d0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDE70u, 0x1CE2CCu, 0x1CE2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE2D4u;
label_1ce2d4:
    // 0x1ce2d4: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1ce2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
label_1ce2d8:
    // 0x1ce2d8: 0x24a5e2a8  addiu       $a1, $a1, -0x1D58
    ctx->pc = 0x1ce2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959784));
label_1ce2dc:
    // 0x1ce2dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ce2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ce2e0:
    // 0x1ce2e0: 0x8fc30480  lw          $v1, 0x480($fp)
    ctx->pc = 0x1ce2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1152)));
label_1ce2e4:
    // 0x1ce2e4: 0x8fc20488  lw          $v0, 0x488($fp)
    ctx->pc = 0x1ce2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1160)));
label_1ce2e8:
    // 0x1ce2e8: 0xafc50520  sw          $a1, 0x520($fp)
    ctx->pc = 0x1ce2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1312), GPR_U32(ctx, 5));
label_1ce2ec:
    // 0x1ce2ec: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x1ce2ecu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ce2f0:
    // 0x1ce2f0: 0x7bb00490  lq          $s0, 0x490($sp)
    ctx->pc = 0x1ce2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_1ce2f4:
    // 0x1ce2f4: 0x7bb104a0  lq          $s1, 0x4A0($sp)
    ctx->pc = 0x1ce2f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_1ce2f8:
    // 0x1ce2f8: 0x7bb204b0  lq          $s2, 0x4B0($sp)
    ctx->pc = 0x1ce2f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_1ce2fc:
    // 0x1ce2fc: 0x7bb304c0  lq          $s3, 0x4C0($sp)
    ctx->pc = 0x1ce2fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_1ce300:
    // 0x1ce300: 0x7bb404d0  lq          $s4, 0x4D0($sp)
    ctx->pc = 0x1ce300u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_1ce304:
    // 0x1ce304: 0x7bb504e0  lq          $s5, 0x4E0($sp)
    ctx->pc = 0x1ce304u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_1ce308:
    // 0x1ce308: 0x7bb604f0  lq          $s6, 0x4F0($sp)
    ctx->pc = 0x1ce308u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_1ce30c:
    // 0x1ce30c: 0x7bb70500  lq          $s7, 0x500($sp)
    ctx->pc = 0x1ce30cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_1ce310:
    // 0x1ce310: 0x7bbe0510  lq          $fp, 0x510($sp)
    ctx->pc = 0x1ce310u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_1ce314:
    // 0x1ce314: 0xdfbf0520  ld          $ra, 0x520($sp)
    ctx->pc = 0x1ce314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1312)));
label_1ce318:
    // 0x1ce318: 0xc7bf0580  lwc1        $f31, 0x580($sp)
    ctx->pc = 0x1ce318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_1ce31c:
    // 0x1ce31c: 0xc7be0578  lwc1        $f30, 0x578($sp)
    ctx->pc = 0x1ce31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_1ce320:
    // 0x1ce320: 0xc7bd0570  lwc1        $f29, 0x570($sp)
    ctx->pc = 0x1ce320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_1ce324:
    // 0x1ce324: 0xc7bc0568  lwc1        $f28, 0x568($sp)
    ctx->pc = 0x1ce324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_1ce328:
    // 0x1ce328: 0xc7bb0560  lwc1        $f27, 0x560($sp)
    ctx->pc = 0x1ce328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_1ce32c:
    // 0x1ce32c: 0xc7ba0558  lwc1        $f26, 0x558($sp)
    ctx->pc = 0x1ce32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_1ce330:
    // 0x1ce330: 0xc7b90550  lwc1        $f25, 0x550($sp)
    ctx->pc = 0x1ce330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1ce334:
    // 0x1ce334: 0xc7b80548  lwc1        $f24, 0x548($sp)
    ctx->pc = 0x1ce334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1ce338:
    // 0x1ce338: 0xc7b70540  lwc1        $f23, 0x540($sp)
    ctx->pc = 0x1ce338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1ce33c:
    // 0x1ce33c: 0xc7b60538  lwc1        $f22, 0x538($sp)
    ctx->pc = 0x1ce33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1ce340:
    // 0x1ce340: 0xc7b50530  lwc1        $f21, 0x530($sp)
    ctx->pc = 0x1ce340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1ce344:
    // 0x1ce344: 0xc7b40528  lwc1        $f20, 0x528($sp)
    ctx->pc = 0x1ce344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ce348:
    // 0x1ce348: 0x3e00008  jr          $ra
label_1ce34c:
    if (ctx->pc == 0x1CE34Cu) {
        ctx->pc = 0x1CE34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE348u;
        // 0x1ce34c: 0x27bd0590  addiu       $sp, $sp, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE350u;
        goto label_fallthrough_0x1ce348;
    }
    ctx->pc = 0x1CE348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE348u;
        // 0x1ce34c: 0x27bd0590  addiu       $sp, $sp, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ce348:
    ctx->pc = 0x1CE350u;
}
