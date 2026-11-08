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

// Function: __kernel_rem_pio2
// Address: 0x1c6fb0 - 0x1c7afc
void ps2___kernel_rem_pio2_0x1c6fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_rem_pio2_0x1c6fb0");
#endif

    switch (ctx->pc) {
        case 0x1c7070u: goto label_1c7070;
        case 0x1c7080u: goto label_1c7080;
        case 0x1c70c0u: goto label_1c70c0;
        case 0x1c70e8u: goto label_1c70e8;
        case 0x1c7100u: goto label_1c7100;
        case 0x1c7110u: goto label_1c7110;
        case 0x1c7138u: goto label_1c7138;
        case 0x1c7158u: goto label_1c7158;
        case 0x1c716cu: goto label_1c716c;
        case 0x1c7178u: goto label_1c7178;
        case 0x1c7180u: goto label_1c7180;
        case 0x1c7198u: goto label_1c7198;
        case 0x1c71a8u: goto label_1c71a8;
        case 0x1c71b4u: goto label_1c71b4;
        case 0x1c71ccu: goto label_1c71cc;
        case 0x1c71e4u: goto label_1c71e4;
        case 0x1c71fcu: goto label_1c71fc;
        case 0x1c7208u: goto label_1c7208;
        case 0x1c721cu: goto label_1c721c;
        case 0x1c722cu: goto label_1c722c;
        case 0x1c723cu: goto label_1c723c;
        case 0x1c7248u: goto label_1c7248;
        case 0x1c7258u: goto label_1c7258;
        case 0x1c72dcu: goto label_1c72dc;
        case 0x1c7310u: goto label_1c7310;
        case 0x1c73c0u: goto label_1c73c0;
        case 0x1c73d8u: goto label_1c73d8;
        case 0x1c73e8u: goto label_1c73e8;
        case 0x1c73fcu: goto label_1c73fc;
        case 0x1c7420u: goto label_1c7420;
        case 0x1c7468u: goto label_1c7468;
        case 0x1c74d0u: goto label_1c74d0;
        case 0x1c74e4u: goto label_1c74e4;
        case 0x1c7508u: goto label_1c7508;
        case 0x1c7520u: goto label_1c7520;
        case 0x1c7530u: goto label_1c7530;
        case 0x1c7570u: goto label_1c7570;
        case 0x1c75a0u: goto label_1c75a0;
        case 0x1c75dcu: goto label_1c75dc;
        case 0x1c75f0u: goto label_1c75f0;
        case 0x1c7610u: goto label_1c7610;
        case 0x1c761cu: goto label_1c761c;
        case 0x1c7624u: goto label_1c7624;
        case 0x1c763cu: goto label_1c763c;
        case 0x1c764cu: goto label_1c764c;
        case 0x1c7658u: goto label_1c7658;
        case 0x1c7684u: goto label_1c7684;
        case 0x1c769cu: goto label_1c769c;
        case 0x1c76c0u: goto label_1c76c0;
        case 0x1c76ccu: goto label_1c76cc;
        case 0x1c76dcu: goto label_1c76dc;
        case 0x1c76f4u: goto label_1c76f4;
        case 0x1c7718u: goto label_1c7718;
        case 0x1c7748u: goto label_1c7748;
        case 0x1c7764u: goto label_1c7764;
        case 0x1c7774u: goto label_1c7774;
        case 0x1c7818u: goto label_1c7818;
        case 0x1c782cu: goto label_1c782c;
        case 0x1c7858u: goto label_1c7858;
        case 0x1c7880u: goto label_1c7880;
        case 0x1c7894u: goto label_1c7894;
        case 0x1c78c0u: goto label_1c78c0;
        case 0x1c78d8u: goto label_1c78d8;
        case 0x1c78f0u: goto label_1c78f0;
        case 0x1c7904u: goto label_1c7904;
        case 0x1c792cu: goto label_1c792c;
        case 0x1c7958u: goto label_1c7958;
        case 0x1c7970u: goto label_1c7970;
        case 0x1c7984u: goto label_1c7984;
        case 0x1c7994u: goto label_1c7994;
        case 0x1c79c0u: goto label_1c79c0;
        case 0x1c79d8u: goto label_1c79d8;
        case 0x1c79ecu: goto label_1c79ec;
        case 0x1c79fcu: goto label_1c79fc;
        case 0x1c7a30u: goto label_1c7a30;
        case 0x1c7a44u: goto label_1c7a44;
        case 0x1c7a8cu: goto label_1c7a8c;
        case 0x1c7aa4u: goto label_1c7aa4;
        case 0x1c7abcu: goto label_1c7abc;
        default: break;
    }

    ctx->pc = 0x1c6fb0u;

    // 0x1c6fb0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1c6fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c6fb4: 0x24cafffd  addiu       $t2, $a2, -0x3
    ctx->pc = 0x1c6fb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x1c6fb8: 0x143001a  div         $zero, $t2, $v1
    ctx->pc = 0x1c6fb8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c6fbc: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1c6fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1c6fc0: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6fc4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1c6fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1c6fc8: 0x8c22bac0  lw          $v0, -0x4540($at)
    ctx->pc = 0x1c6fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949568)));
    // 0x1c6fcc: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x1c6fccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x1c6fd0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c6fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c6fd4: 0xffb00270  sd          $s0, 0x270($sp)
    ctx->pc = 0x1c6fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 16));
    // 0x1c6fd8: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x1c6fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    // 0x1c6fdc: 0xffb10278  sd          $s1, 0x278($sp)
    ctx->pc = 0x1c6fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 17));
    // 0x1c6fe0: 0xffb20280  sd          $s2, 0x280($sp)
    ctx->pc = 0x1c6fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 18));
    // 0x1c6fe4: 0xffb30288  sd          $s3, 0x288($sp)
    ctx->pc = 0x1c6fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 19));
    // 0x1c6fe8: 0xffb40290  sd          $s4, 0x290($sp)
    ctx->pc = 0x1c6fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 20));
    // 0x1c6fec: 0xffb50298  sd          $s5, 0x298($sp)
    ctx->pc = 0x1c6fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 664), GPR_U64(ctx, 21));
    // 0x1c6ff0: 0xffb602a0  sd          $s6, 0x2A0($sp)
    ctx->pc = 0x1c6ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 22));
    // 0x1c6ff4: 0xffb702a8  sd          $s7, 0x2A8($sp)
    ctx->pc = 0x1c6ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 680), GPR_U64(ctx, 23));
    // 0x1c6ff8: 0xffbe02b0  sd          $fp, 0x2B0($sp)
    ctx->pc = 0x1c6ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 30));
    // 0x1c6ffc: 0xffbf02b8  sd          $ra, 0x2B8($sp)
    ctx->pc = 0x1c6ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 696), GPR_U64(ctx, 31));
    // 0x1c7000: 0xafa80238  sw          $t0, 0x238($sp)
    ctx->pc = 0x1c7000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 8));
    // 0x1c7004: 0xafa70240  sw          $a3, 0x240($sp)
    ctx->pc = 0x1c7004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 7));
    // 0x1c7008: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C7008u;
    {
        const bool branch_taken_0x1c7008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7008) {
            ctx->pc = 0x1C700Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7008u;
            // 0x1c700c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7010u;
            goto label_1c7010;
        }
    }
    ctx->pc = 0x1C7010u;
label_1c7010:
    // 0x1c7010: 0xafa40230  sw          $a0, 0x230($sp)
    ctx->pc = 0x1c7010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 4));
    // 0x1c7014: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x1c7014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1c7018: 0xafa50234  sw          $a1, 0x234($sp)
    ctx->pc = 0x1c7018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 5));
    // 0x1c701c: 0xafa9023c  sw          $t1, 0x23C($sp)
    ctx->pc = 0x1c701cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 9));
    // 0x1c7020: 0x5012  mflo        $t2
    ctx->pc = 0x1c7020u;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x1c7024: 0x29430000  slti        $v1, $t2, 0x0
    ctx->pc = 0x1c7024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c7028: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x1c7028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c702c: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1c702cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1c7030: 0xafaa0244  sw          $t2, 0x244($sp)
    ctx->pc = 0x1c7030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 10));
    // 0x1c7034: 0xafa20244  sw          $v0, 0x244($sp)
    ctx->pc = 0x1c7034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
    // 0x1c7038: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1c7038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c703c: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x1c703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x1c7040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c7040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c7044: 0x678023  subu        $s0, $v1, $a3
    ctx->pc = 0x1c7044u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1c7048: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c7048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c704c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1c704cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1c7050: 0x24c6ffe8  addiu       $a2, $a2, -0x18
    ctx->pc = 0x1c7050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x1c7054: 0x4800014  bltz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C7054u;
    {
        const bool branch_taken_0x1c7054 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1C7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7054u;
        // 0x1c7058: 0xafa60250  sw          $a2, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7054) {
            ctx->pc = 0x1C70A8u;
            goto label_1c70a8;
        }
    }
    ctx->pc = 0x1C705Cu;
    // 0x1c705c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1c705cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c7060: 0x24920001  addiu       $s2, $a0, 0x1
    ctx->pc = 0x1c7060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c7064: 0x499821  addu        $s3, $v0, $t1
    ctx->pc = 0x1c7064u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1c7068: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x1c7068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c706c: 0x0  nop
    ctx->pc = 0x1c706cu;
    // NOP
label_1c7070:
    // 0x1c7070: 0x6020007  bltzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7070u;
    {
        const bool branch_taken_0x1c7070 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1c7070) {
            ctx->pc = 0x1C7074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7070u;
            // 0x1c7074: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7090u;
            goto label_1c7090;
        }
    }
    ctx->pc = 0x1C7078u;
    // 0x1c7078: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1C7078u;
    SET_GPR_U32(ctx, 31, 0x1C7080u);
    ctx->pc = 0x1C707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7078u;
    // 0x1c707c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1C7078u, 0x1C7080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7080u;
label_1c7080:
    // 0x1c7080: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1c7080u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x1c7084: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7084u;
    {
        const bool branch_taken_0x1c7084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7084u;
        // 0x1c7088: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7084) {
            ctx->pc = 0x1C7098u;
            goto label_1c7098;
        }
    }
    ctx->pc = 0x1C708Cu;
    // 0x1c708c: 0x0  nop
    ctx->pc = 0x1c708cu;
    // NOP
label_1c7090:
    // 0x1c7090: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c7090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7094: 0xfe240000  sd          $a0, 0x0($s1)
    ctx->pc = 0x1c7094u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 4));
label_1c7098:
    // 0x1c7098: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x1c7098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1c709c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1c709cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1c70a0: 0x1640fff3  bnez        $s2, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C70A0u;
    {
        const bool branch_taken_0x1c70a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C70A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70A0u;
        // 0x1c70a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70a0) {
            ctx->pc = 0x1C7070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7070;
        }
    }
    ctx->pc = 0x1C70A8u;
label_1c70a8:
    // 0x1c70a8: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x1c70a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1c70ac: 0x4a00021  bltz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C70ACu;
    {
        const bool branch_taken_0x1c70ac = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1C70B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70ACu;
        // 0x1c70b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70ac) {
            ctx->pc = 0x1C7134u;
            goto label_1c7134;
        }
    }
    ctx->pc = 0x1C70B4u;
    // 0x1c70b4: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1c70b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c70b8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1c70b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70bc: 0x0  nop
    ctx->pc = 0x1c70bcu;
    // NOP
label_1c70c0:
    // 0x1c70c0: 0x8fa80240  lw          $t0, 0x240($sp)
    ctx->pc = 0x1c70c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1c70c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c70c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70c8: 0x5000014  bltz        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C70C8u;
    {
        const bool branch_taken_0x1c70c8 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x1C70CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70C8u;
        // 0x1c70cc: 0x1121021  addu        $v0, $t0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70c8) {
            ctx->pc = 0x1C711Cu;
            goto label_1c711c;
        }
    }
    ctx->pc = 0x1C70D0u;
    // 0x1c70d0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1c70d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c70d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c70d8: 0x8fb30230  lw          $s3, 0x230($sp)
    ctx->pc = 0x1c70d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1c70dc: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1c70dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c70e0: 0x25100001  addiu       $s0, $t0, 0x1
    ctx->pc = 0x1c70e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c70e4: 0x0  nop
    ctx->pc = 0x1c70e4u;
    // NOP
label_1c70e8:
    // 0x1c70e8: 0xde640000  ld          $a0, 0x0($s3)
    ctx->pc = 0x1c70e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c70ec: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1c70ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1c70f0: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x1c70f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c70f4: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x1c70f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x1c70f8: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C70F8u;
    SET_GPR_U32(ctx, 31, 0x1C7100u);
    ctx->pc = 0x1C70FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70F8u;
    // 0x1c70fc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C70F8u, 0x1C7100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7100u;
label_1c7100:
    // 0x1c7100: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7104: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7108: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7108u;
    SET_GPR_U32(ctx, 31, 0x1C7110u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7108u, 0x1C7110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7110u;
label_1c7110:
    // 0x1c7110: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c7110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7114: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C7114u;
    {
        const bool branch_taken_0x1c7114 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7114) {
            ctx->pc = 0x1C70E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c70e8;
        }
    }
    ctx->pc = 0x1C711Cu;
label_1c711c:
    // 0x1c711c: 0xfeb40000  sd          $s4, 0x0($s5)
    ctx->pc = 0x1c711cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 20));
    // 0x1c7120: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c7120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c7124: 0x8fa40248  lw          $a0, 0x248($sp)
    ctx->pc = 0x1c7124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1c7128: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x1c7128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c712c: 0x1040ffe4  beqz        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C712Cu;
    {
        const bool branch_taken_0x1c712c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C712Cu;
        // 0x1c7130: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c712c) {
            ctx->pc = 0x1C70C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c70c0;
        }
    }
    ctx->pc = 0x1C7134u;
label_1c7134:
    // 0x1c7134: 0x8fb60248  lw          $s6, 0x248($sp)
    ctx->pc = 0x1c7134u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_1c7138:
    // 0x1c7138: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x1c7138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x1c713c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x1c713cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c7140: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x1c7140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c7144: 0xdc930000  ld          $s3, 0x0($a0)
    ctx->pc = 0x1c7144u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c7148: 0x1ac00023  blez        $s6, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C7148u;
    {
        const bool branch_taken_0x1c7148 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1C714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7148u;
        // 0x1c714c: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7148) {
            ctx->pc = 0x1C71D8u;
            goto label_1c71d8;
        }
    }
    ctx->pc = 0x1C7150u;
    // 0x1c7150: 0x2491fff8  addiu       $s1, $a0, -0x8
    ctx->pc = 0x1c7150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x1c7154: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x1c7154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c7158:
    // 0x1c7158: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x1c7158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x1c715c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1c715cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1c7160: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c7160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7164: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7164u;
    SET_GPR_U32(ctx, 31, 0x1C716Cu);
    ctx->pc = 0x1C7168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7164u;
    // 0x1c7168: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7164u, 0x1C716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C716Cu;
label_1c716c:
    // 0x1c716c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c716cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7170: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C7170u;
    SET_GPR_U32(ctx, 31, 0x1C7178u);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C7170u, 0x1C7178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7178u;
label_1c7178:
    // 0x1c7178: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1C7178u;
    SET_GPR_U32(ctx, 31, 0x1C7180u);
    ctx->pc = 0x1C717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7178u;
    // 0x1c717c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1C7178u, 0x1C7180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7180u;
label_1c7180:
    // 0x1c7180: 0x340582e0  ori         $a1, $zero, 0x82E0
    ctx->pc = 0x1c7180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x1c7184: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1c7184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1c7188: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c7188u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c718c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c718cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7190: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7190u;
    SET_GPR_U32(ctx, 31, 0x1C7198u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7190u, 0x1C7198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7198u;
label_1c7198:
    // 0x1c7198: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c7198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c719c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c719cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71a0: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C71A0u;
    SET_GPR_U32(ctx, 31, 0x1C71A8u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C71A0u, 0x1C71A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71A8u;
label_1c71a8:
    // 0x1c71a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c71a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71ac: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C71ACu;
    SET_GPR_U32(ctx, 31, 0x1C71B4u);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C71ACu, 0x1C71B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71B4u;
label_1c71b4:
    // 0x1c71b4: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x1c71b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c71b8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1c71b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1c71bc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1c71bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1c71c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c71c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71c4: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C71C4u;
    SET_GPR_U32(ctx, 31, 0x1C71CCu);
    ctx->pc = 0x1C71C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C71C4u;
    // 0x1c71c8: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C71C4u, 0x1C71CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71CCu;
label_1c71cc:
    // 0x1c71cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c71ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71d0: 0x1e00ffe1  bgtz        $s0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1C71D0u;
    {
        const bool branch_taken_0x1c71d0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1c71d0) {
            ctx->pc = 0x1C7158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7158;
        }
    }
    ctx->pc = 0x1C71D8u;
label_1c71d8:
    // 0x1c71d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c71d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71dc: 0xc071fe2  jal         func_1C7F88
    ctx->pc = 0x1C71DCu;
    SET_GPR_U32(ctx, 31, 0x1C71E4u);
    ctx->pc = 0x1C71E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C71DCu;
    // 0x1c71e0: 0x8fa50250  lw          $a1, 0x250($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7F88u, 0x1C71DCu, 0x1C71E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71E4u;
label_1c71e4:
    // 0x1c71e4: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x1c71e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1c71e8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1c71e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1c71ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c71ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c71f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71f4: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C71F4u;
    SET_GPR_U32(ctx, 31, 0x1C71FCu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C71F4u, 0x1C71FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71FCu;
label_1c71fc:
    // 0x1c71fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c71fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7200: 0xc071f5c  jal         func_1C7D70
    ctx->pc = 0x1C7200u;
    SET_GPR_U32(ctx, 31, 0x1C7208u);
    ctx->pc = 0x1C7D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D70u, 0x1C7200u, 0x1C7208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7208u;
label_1c7208:
    // 0x1c7208: 0x34058040  ori         $a1, $zero, 0x8040
    ctx->pc = 0x1c7208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
    // 0x1c720c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1c720cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1c7210: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7214: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7214u;
    SET_GPR_U32(ctx, 31, 0x1C721Cu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7214u, 0x1C721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C721Cu;
label_1c721c:
    // 0x1c721c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c721cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7220: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7224: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7224u;
    SET_GPR_U32(ctx, 31, 0x1C722Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7224u, 0x1C722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C722Cu;
label_1c722c:
    // 0x1c722c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c722cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7230: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c7230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7234: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C7234u;
    SET_GPR_U32(ctx, 31, 0x1C723Cu);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C7234u, 0x1C723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C723Cu;
label_1c723c:
    // 0x1c723c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c723cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7240: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1C7240u;
    SET_GPR_U32(ctx, 31, 0x1C7248u);
    ctx->pc = 0x1C7244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7240u;
    // 0x1c7244: 0xafa2024c  sw          $v0, 0x24C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1C7240u, 0x1C7248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7248u;
label_1c7248:
    // 0x1c7248: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c7248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c724c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c724cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7250: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7250u;
    SET_GPR_U32(ctx, 31, 0x1C7258u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7250u, 0x1C7258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7258u;
label_1c7258:
    // 0x1c7258: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x1c7258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1c725c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c725cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7260: 0x18c00013  blez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C7260u;
    {
        const bool branch_taken_0x1c7260 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1C7264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7260u;
        // 0x1c7264: 0x8fa20250  lw          $v0, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7260) {
            ctx->pc = 0x1C72B0u;
            goto label_1c72b0;
        }
    }
    ctx->pc = 0x1C7268u;
    // 0x1c7268: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x1c7268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1c726c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1c726cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c7270: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1c7270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1c7274: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1c7274u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c7278: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x1c7278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1c727c: 0x8fa8024c  lw          $t0, 0x24C($sp)
    ctx->pc = 0x1c727cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x1c7280: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c7280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c7284: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1c7284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1c7288: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x1c7288u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1c728c: 0x629007  srav        $s2, $v0, $v1
    ctx->pc = 0x1c728cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1c7290: 0x721804  sllv        $v1, $s2, $v1
    ctx->pc = 0x1c7290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 3) & 0x1F));
    // 0x1c7294: 0x1124021  addu        $t0, $t0, $s2
    ctx->pc = 0x1c7294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x1c7298: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c7298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c729c: 0xafa8024c  sw          $t0, 0x24C($sp)
    ctx->pc = 0x1c729cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 8));
    // 0x1c72a0: 0x82f007  srav        $fp, $v0, $a0
    ctx->pc = 0x1c72a0u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c72a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C72A4u;
    {
        const bool branch_taken_0x1c72a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C72A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72A4u;
        // 0x1c72a8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72a4) {
            ctx->pc = 0x1C72E4u;
            goto label_1c72e4;
        }
    }
    ctx->pc = 0x1C72ACu;
    // 0x1c72ac: 0x0  nop
    ctx->pc = 0x1c72acu;
    // NOP
label_1c72b0:
    // 0x1c72b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C72B0u;
    {
        const bool branch_taken_0x1c72b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72B0u;
        // 0x1c72b4: 0x161080  sll         $v0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72b0) {
            ctx->pc = 0x1C72C8u;
            goto label_1c72c8;
        }
    }
    ctx->pc = 0x1C72B8u;
    // 0x1c72b8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1c72b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c72bc: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x1c72bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x1c72c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C72C0u;
    {
        const bool branch_taken_0x1c72c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72C0u;
        // 0x1c72c4: 0x3f5c3  sra         $fp, $v1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72c0) {
            ctx->pc = 0x1C72E4u;
            goto label_1c72e4;
        }
    }
    ctx->pc = 0x1C72C8u;
label_1c72c8:
    // 0x1c72c8: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x1c72c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1c72cc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1c72ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1c72d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c72d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c72d4: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1C72D4u;
    SET_GPR_U32(ctx, 31, 0x1C72DCu);
    ctx->pc = 0x1C72D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C72D4u;
    // 0x1c72d8: 0x241e0002  addiu       $fp, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1C72D4u, 0x1C72DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C72DCu;
label_1c72dc:
    // 0x1c72dc: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1c72dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c72e0: 0x2f00b  movn        $fp, $zero, $v0
    ctx->pc = 0x1c72e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_1c72e4:
    // 0x1c72e4: 0x1bc00041  blez        $fp, . + 4 + (0x41 << 2)
    ctx->pc = 0x1C72E4u;
    {
        const bool branch_taken_0x1c72e4 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x1C72E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72E4u;
        // 0x1c72e8: 0x8fa3024c  lw          $v1, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72e4) {
            ctx->pc = 0x1C73ECu;
            goto label_1c73ec;
        }
    }
    ctx->pc = 0x1C72ECu;
    // 0x1c72ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c72ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c72f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c72f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c72f4: 0x1ac00013  blez        $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C72F4u;
    {
        const bool branch_taken_0x1c72f4 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1C72F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72F4u;
        // 0x1c72f8: 0xafa3024c  sw          $v1, 0x24C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72f4) {
            ctx->pc = 0x1C7344u;
            goto label_1c7344;
        }
    }
    ctx->pc = 0x1C72FCu;
    // 0x1c72fc: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x1c72fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x1c7300: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1c7300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1c7304: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1c7304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1c7308: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1c7308u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c730c: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1c730cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c7310:
    // 0x1c7310: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7310u;
    {
        const bool branch_taken_0x1c7310 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7310u;
        // 0x1c7314: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7310) {
            ctx->pc = 0x1C7328u;
            goto label_1c7328;
        }
    }
    ctx->pc = 0x1C7318u;
    // 0x1c7318: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7318u;
    {
        const bool branch_taken_0x1c7318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7318u;
        // 0x1c731c: 0xb01023  subu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7318) {
            ctx->pc = 0x1C7330u;
            goto label_1c7330;
        }
    }
    ctx->pc = 0x1C7320u;
    // 0x1c7320: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7320u;
    {
        const bool branch_taken_0x1c7320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7320u;
        // 0x1c7324: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7320) {
            ctx->pc = 0x1C732Cu;
            goto label_1c732c;
        }
    }
    ctx->pc = 0x1C7328u;
label_1c7328:
    // 0x1c7328: 0x901023  subu        $v0, $a0, $s0
    ctx->pc = 0x1c7328u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1c732c:
    // 0x1c732c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c732cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1c7330:
    // 0x1c7330: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1c7330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1c7334: 0x0  nop
    ctx->pc = 0x1c7334u;
    // NOP
    // 0x1c7338: 0x0  nop
    ctx->pc = 0x1c7338u;
    // NOP
    // 0x1c733c: 0x1640fff4  bnez        $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C733Cu;
    {
        const bool branch_taken_0x1c733c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C733Cu;
        // 0x1c7340: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c733c) {
            ctx->pc = 0x1C7310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7310;
        }
    }
    ctx->pc = 0x1C7344u;
label_1c7344:
    // 0x1c7344: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x1c7344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1c7348: 0x18800015  blez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C7348u;
    {
        const bool branch_taken_0x1c7348 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1C734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7348u;
        // 0x1c734c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7348) {
            ctx->pc = 0x1C73A0u;
            goto label_1c73a0;
        }
    }
    ctx->pc = 0x1C7350u;
    // 0x1c7350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7354: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7354u;
    {
        const bool branch_taken_0x1c7354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7354u;
        // 0x1c7358: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7354) {
            ctx->pc = 0x1C7370u;
            goto label_1c7370;
        }
    }
    ctx->pc = 0x1C735Cu;
    // 0x1c735c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C735Cu;
    {
        const bool branch_taken_0x1c735c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C735Cu;
        // 0x1c7360: 0x161880  sll         $v1, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c735c) {
            ctx->pc = 0x1C7380u;
            goto label_1c7380;
        }
    }
    ctx->pc = 0x1C7364u;
    // 0x1c7364: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C7364u;
    {
        const bool branch_taken_0x1c7364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7364) {
            ctx->pc = 0x1C73A0u;
            goto label_1c73a0;
        }
    }
    ctx->pc = 0x1C736Cu;
    // 0x1c736c: 0x0  nop
    ctx->pc = 0x1c736cu;
    // NOP
label_1c7370:
    // 0x1c7370: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1c7370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1c7374: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7374u;
    {
        const bool branch_taken_0x1c7374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7374u;
        // 0x1c7378: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7374) {
            ctx->pc = 0x1C7384u;
            goto label_1c7384;
        }
    }
    ctx->pc = 0x1C737Cu;
    // 0x1c737c: 0x0  nop
    ctx->pc = 0x1c737cu;
    // NOP
label_1c7380:
    // 0x1c7380: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c7380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c7384:
    // 0x1c7384: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1c7384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1c7388: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1c7388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1c738c: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x1c738cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1c7390: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c7390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c7394: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1c7394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1c7398: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c7398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1c739c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c73a0:
    // 0x1c73a0: 0x17c20012  bne         $fp, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C73A0u;
    {
        const bool branch_taken_0x1c73a0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c73a0) {
            ctx->pc = 0x1C73ECu;
            goto label_1c73ec;
        }
    }
    ctx->pc = 0x1C73A8u;
    // 0x1c73a8: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x1c73a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1c73ac: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x1c73acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x1c73b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c73b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c73b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73b8: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C73B8u;
    SET_GPR_U32(ctx, 31, 0x1C73C0u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C73B8u, 0x1C73C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73C0u;
label_1c73c0:
    // 0x1c73c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c73c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73c4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C73C4u;
    {
        const bool branch_taken_0x1c73c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c73c4) {
            ctx->pc = 0x1C73ECu;
            goto label_1c73ec;
        }
    }
    ctx->pc = 0x1C73CCu;
    // 0x1c73cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c73ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73d0: 0xc071fe2  jal         func_1C7F88
    ctx->pc = 0x1C73D0u;
    SET_GPR_U32(ctx, 31, 0x1C73D8u);
    ctx->pc = 0x1C73D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73D0u;
    // 0x1c73d4: 0x8fa50250  lw          $a1, 0x250($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7F88u, 0x1C73D0u, 0x1C73D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73D8u;
label_1c73d8:
    // 0x1c73d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c73d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c73dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73e0: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C73E0u;
    SET_GPR_U32(ctx, 31, 0x1C73E8u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C73E0u, 0x1C73E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73E8u;
label_1c73e8:
    // 0x1c73e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c73e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c73ec:
    // 0x1c73ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c73ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c73f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73f4: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1C73F4u;
    SET_GPR_U32(ctx, 31, 0x1C73FCu);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1C73F4u, 0x1C73FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73FCu;
label_1c73fc:
    // 0x1c73fc: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1C73FCu;
    {
        const bool branch_taken_0x1c73fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73FCu;
        // 0x1c7400: 0x8fa50248  lw          $a1, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c73fc) {
            ctx->pc = 0x1C7560u;
            goto label_1c7560;
        }
    }
    ctx->pc = 0x1C7404u;
    // 0x1c7404: 0x26d2ffff  addiu       $s2, $s6, -0x1
    ctx->pc = 0x1c7404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1c7408: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x1c7408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1c740c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C740Cu;
    {
        const bool branch_taken_0x1c740c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C740Cu;
        // 0x1c7410: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c740c) {
            ctx->pc = 0x1C743Cu;
            goto label_1c743c;
        }
    }
    ctx->pc = 0x1C7414u;
    // 0x1c7414: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1c7414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1c7418: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x1c7418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c741c: 0x8fa60248  lw          $a2, 0x248($sp)
    ctx->pc = 0x1c741cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_1c7420:
    // 0x1c7420: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1c7420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1c7424: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c7424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c7428: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1c7428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1c742c: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x1c742cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1c7430: 0x0  nop
    ctx->pc = 0x1c7430u;
    // NOP
    // 0x1c7434: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C7434u;
    {
        const bool branch_taken_0x1c7434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7434u;
        // 0x1c7438: 0x2038025  or          $s0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7434) {
            ctx->pc = 0x1C7420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7420;
        }
    }
    ctx->pc = 0x1C743Cu;
label_1c743c:
    // 0x1c743c: 0x16000048  bnez        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1C743Cu;
    {
        const bool branch_taken_0x1c743c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C743Cu;
        // 0x1c7440: 0x8fa80248  lw          $t0, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c743c) {
            ctx->pc = 0x1C7560u;
            goto label_1c7560;
        }
    }
    ctx->pc = 0x1C7444u;
    // 0x1c7444: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x1c7444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1c7448: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c7448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c744c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1c744cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1c7450: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c7450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c7454: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C7454u;
    {
        const bool branch_taken_0x1c7454 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7454u;
        // 0x1c7458: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7454) {
            ctx->pc = 0x1C7484u;
            goto label_1c7484;
        }
    }
    ctx->pc = 0x1C745Cu;
    // 0x1c745c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1c745cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1c7460: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1c7460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c7464: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x1c7464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1c7468:
    // 0x1c7468: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1c7468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1c746c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c746cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c7470: 0x0  nop
    ctx->pc = 0x1c7470u;
    // NOP
    // 0x1c7474: 0x0  nop
    ctx->pc = 0x1c7474u;
    // NOP
    // 0x1c7478: 0x0  nop
    ctx->pc = 0x1c7478u;
    // NOP
    // 0x1c747c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C747Cu;
    {
        const bool branch_taken_0x1c747c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C747Cu;
        // 0x1c7480: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c747c) {
            ctx->pc = 0x1C7468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7468;
        }
    }
    ctx->pc = 0x1C7484u;
label_1c7484:
    // 0x1c7484: 0x2d5f021  addu        $fp, $s6, $s5
    ctx->pc = 0x1c7484u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x1c7488: 0x26d20001  addiu       $s2, $s6, 0x1
    ctx->pc = 0x1c7488u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1c748c: 0x3d2102a  slt         $v0, $fp, $s2
    ctx->pc = 0x1c748cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c7490: 0x1440ff29  bnez        $v0, . + 4 + (-0xD7 << 2)
    ctx->pc = 0x1C7490u;
    {
        const bool branch_taken_0x1c7490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7490u;
        // 0x1c7494: 0x3c0b02d  daddu       $s6, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7490) {
            ctx->pc = 0x1C7138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7138;
        }
    }
    ctx->pc = 0x1C7498u;
    // 0x1c7498: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x1c7498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1c749c: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x1c749cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c74a0: 0x8fa50244  lw          $a1, 0x244($sp)
    ctx->pc = 0x1c74a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x1c74a4: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1c74a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c74a8: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1c74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1c74ac: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1c74acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1c74b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c74b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c74b4: 0xb22021  addu        $a0, $a1, $s2
    ctx->pc = 0x1c74b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1c74b8: 0x48b021  addu        $s6, $v0, $t0
    ctx->pc = 0x1c74b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1c74bc: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x1c74bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x1c74c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c74c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c74c4: 0x66b821  addu        $s7, $v1, $a2
    ctx->pc = 0x1c74c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c74c8: 0x82a821  addu        $s5, $a0, $v0
    ctx->pc = 0x1c74c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c74cc: 0x0  nop
    ctx->pc = 0x1c74ccu;
    // NOP
label_1c74d0:
    // 0x1c74d0: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x1c74d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1c74d4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c74d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74d8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1c74d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c74dc: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1C74DCu;
    SET_GPR_U32(ctx, 31, 0x1C74E4u);
    ctx->pc = 0x1C74E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74DCu;
    // 0x1c74e0: 0x728021  addu        $s0, $v1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1C74DCu, 0x1C74E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74E4u;
label_1c74e4:
    // 0x1c74e4: 0xfec20000  sd          $v0, 0x0($s6)
    ctx->pc = 0x1c74e4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 2));
    // 0x1c74e8: 0x8fa40240  lw          $a0, 0x240($sp)
    ctx->pc = 0x1c74e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1c74ec: 0x4820014  bltzl       $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C74ECu;
    {
        const bool branch_taken_0x1c74ec = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1c74ec) {
            ctx->pc = 0x1C74F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C74ECu;
            // 0x1c74f0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7540u;
            goto label_1c7540;
        }
    }
    ctx->pc = 0x1C74F4u;
    // 0x1c74f4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1c74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1c74f8: 0x24900001  addiu       $s0, $a0, 0x1
    ctx->pc = 0x1c74f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c74fc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1c74fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c7500: 0x8fb30230  lw          $s3, 0x230($sp)
    ctx->pc = 0x1c7500u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1c7504: 0x458821  addu        $s1, $v0, $a1
    ctx->pc = 0x1c7504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1c7508:
    // 0x1c7508: 0xde640000  ld          $a0, 0x0($s3)
    ctx->pc = 0x1c7508u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c750c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1c750cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1c7510: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x1c7510u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c7514: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x1c7514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x1c7518: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7518u;
    SET_GPR_U32(ctx, 31, 0x1C7520u);
    ctx->pc = 0x1C751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7518u;
    // 0x1c751c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7518u, 0x1C7520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7520u;
label_1c7520:
    // 0x1c7520: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7524: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7528: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7528u;
    SET_GPR_U32(ctx, 31, 0x1C7530u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7528u, 0x1C7530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7530u;
label_1c7530:
    // 0x1c7530: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c7530u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7534: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C7534u;
    {
        const bool branch_taken_0x1c7534 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7534) {
            ctx->pc = 0x1C7508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7508;
        }
    }
    ctx->pc = 0x1C753Cu;
    // 0x1c753c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c753cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c7540:
    // 0x1c7540: 0xfef40000  sd          $s4, 0x0($s7)
    ctx->pc = 0x1c7540u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 20));
    // 0x1c7544: 0x3d2102a  slt         $v0, $fp, $s2
    ctx->pc = 0x1c7544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c7548: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1c7548u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1c754c: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x1c754cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x1c7550: 0x1040ffdf  beqz        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C7550u;
    {
        const bool branch_taken_0x1c7550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7550u;
        // 0x1c7554: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7550) {
            ctx->pc = 0x1C74D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c74d0;
        }
    }
    ctx->pc = 0x1C7558u;
    // 0x1c7558: 0x1000fef7  b           . + 4 + (-0x109 << 2)
    ctx->pc = 0x1C7558u;
    {
        const bool branch_taken_0x1c7558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7558u;
        // 0x1c755c: 0x3c0b02d  daddu       $s6, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7558) {
            ctx->pc = 0x1C7138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7138;
        }
    }
    ctx->pc = 0x1C7560u;
label_1c7560:
    // 0x1c7560: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c7560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7568: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1C7568u;
    SET_GPR_U32(ctx, 31, 0x1C7570u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1C7568u, 0x1C7570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7570u;
label_1c7570:
    // 0x1c7570: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C7570u;
    {
        const bool branch_taken_0x1c7570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7570u;
        // 0x1c7574: 0x8fa20250  lw          $v0, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7570) {
            ctx->pc = 0x1C75C8u;
            goto label_1c75c8;
        }
    }
    ctx->pc = 0x1C7578u;
    // 0x1c7578: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x1c7578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1c757c: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1c757cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1c7580: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x1c7580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1c7584: 0x24c6ffe8  addiu       $a2, $a2, -0x18
    ctx->pc = 0x1c7584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x1c7588: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1c7588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1c758c: 0xafa60250  sw          $a2, 0x250($sp)
    ctx->pc = 0x1c758cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 6));
    // 0x1c7590: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c7590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7594: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1C7594u;
    {
        const bool branch_taken_0x1c7594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7594u;
        // 0x1c7598: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7594) {
            ctx->pc = 0x1C7688u;
            goto label_1c7688;
        }
    }
    ctx->pc = 0x1C759Cu;
    // 0x1c759c: 0x0  nop
    ctx->pc = 0x1c759cu;
    // NOP
label_1c75a0:
    // 0x1c75a0: 0x8fa80250  lw          $t0, 0x250($sp)
    ctx->pc = 0x1c75a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1c75a4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1c75a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1c75a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c75a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c75ac: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1c75acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1c75b0: 0x2508ffe8  addiu       $t0, $t0, -0x18
    ctx->pc = 0x1c75b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967272));
    // 0x1c75b4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C75B4u;
    {
        const bool branch_taken_0x1c75b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C75B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75B4u;
        // 0x1c75b8: 0xafa80250  sw          $t0, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75b4) {
            ctx->pc = 0x1C75A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c75a0;
        }
    }
    ctx->pc = 0x1C75BCu;
    // 0x1c75bc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1C75BCu;
    {
        const bool branch_taken_0x1c75bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c75bc) {
            ctx->pc = 0x1C7688u;
            goto label_1c7688;
        }
    }
    ctx->pc = 0x1C75C4u;
    // 0x1c75c4: 0x0  nop
    ctx->pc = 0x1c75c4u;
    // NOP
label_1c75c8:
    // 0x1c75c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c75c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75cc: 0x341082e0  ori         $s0, $zero, 0x82E0
    ctx->pc = 0x1c75ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x1c75d0: 0x1083fc  dsll32      $s0, $s0, 15
    ctx->pc = 0x1c75d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 15));
    // 0x1c75d4: 0xc071fe2  jal         func_1C7F88
    ctx->pc = 0x1C75D4u;
    SET_GPR_U32(ctx, 31, 0x1C75DCu);
    ctx->pc = 0x1C75D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75D4u;
    // 0x1c75d8: 0x22823  negu        $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7F88u, 0x1C75D4u, 0x1C75DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75DCu;
label_1c75dc:
    // 0x1c75dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c75dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c75e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c75e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75e8: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1C75E8u;
    SET_GPR_U32(ctx, 31, 0x1C75F0u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1C75E8u, 0x1C75F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75F0u;
label_1c75f0:
    // 0x1c75f0: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C75F0u;
    {
        const bool branch_taken_0x1c75f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75F0u;
        // 0x1c75f4: 0x8fa30250  lw          $v1, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75f0) {
            ctx->pc = 0x1C7670u;
            goto label_1c7670;
        }
    }
    ctx->pc = 0x1C75F8u;
    // 0x1c75f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c75f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75fc: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x1c75fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x1c7600: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1c7600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1c7604: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1c7604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1c7608: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7608u;
    SET_GPR_U32(ctx, 31, 0x1C7610u);
    ctx->pc = 0x1C760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7608u;
    // 0x1c760c: 0xafa30250  sw          $v1, 0x250($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7608u, 0x1C7610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7610u;
label_1c7610:
    // 0x1c7610: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7614: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C7614u;
    SET_GPR_U32(ctx, 31, 0x1C761Cu);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C7614u, 0x1C761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C761Cu;
label_1c761c:
    // 0x1c761c: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1C761Cu;
    SET_GPR_U32(ctx, 31, 0x1C7624u);
    ctx->pc = 0x1C7620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C761Cu;
    // 0x1c7620: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1C761Cu, 0x1C7624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7624u;
label_1c7624:
    // 0x1c7624: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c7624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7628: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c7628u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c762c: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x1c762cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1c7630: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7634: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7634u;
    SET_GPR_U32(ctx, 31, 0x1C763Cu);
    ctx->pc = 0x1C7638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7634u;
    // 0x1c7638: 0x3a28821  addu        $s1, $sp, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7634u, 0x1C763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C763Cu;
label_1c763c:
    // 0x1c763c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c763cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7640: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7644: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7644u;
    SET_GPR_U32(ctx, 31, 0x1C764Cu);
    ctx->pc = 0x1C7648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7644u;
    // 0x1c7648: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7644u, 0x1C764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C764Cu;
label_1c764c:
    // 0x1c764c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c764cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7650: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C7650u;
    SET_GPR_U32(ctx, 31, 0x1C7658u);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C7650u, 0x1C7658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7658u;
label_1c7658:
    // 0x1c7658: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1c7658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1c765c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1c765cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1c7660: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7664: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7664u;
    {
        const bool branch_taken_0x1c7664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7664u;
        // 0x1c7668: 0x3a38021  addu        $s0, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7664) {
            ctx->pc = 0x1C767Cu;
            goto label_1c767c;
        }
    }
    ctx->pc = 0x1C766Cu;
    // 0x1c766c: 0x0  nop
    ctx->pc = 0x1c766cu;
    // NOP
label_1c7670:
    // 0x1c7670: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x1c7670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1c7674: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c7674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7678: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x1c7678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1c767c:
    // 0x1c767c: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C767Cu;
    SET_GPR_U32(ctx, 31, 0x1C7684u);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C767Cu, 0x1C7684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7684u;
label_1c7684:
    // 0x1c7684: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c7684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1c7688:
    // 0x1c7688: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1c7688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1c768c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1c768cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1c7690: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1c7690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7694: 0xc071fe2  jal         func_1C7F88
    ctx->pc = 0x1C7694u;
    SET_GPR_U32(ctx, 31, 0x1C769Cu);
    ctx->pc = 0x1C7698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7694u;
    // 0x1c7698: 0x8fa50250  lw          $a1, 0x250($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7F88u, 0x1C7694u, 0x1C769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C769Cu;
label_1c769c:
    // 0x1c769c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c769cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76a0: 0x6400017  bltz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C76A0u;
    {
        const bool branch_taken_0x1c76a0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1C76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76A0u;
        // 0x1c76a4: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76a0) {
            ctx->pc = 0x1C7700u;
            goto label_1c7700;
        }
    }
    ctx->pc = 0x1C76A8u;
    // 0x1c76a8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1c76a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1c76ac: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1c76acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c76b0: 0x7d8021  addu        $s0, $v1, $sp
    ctx->pc = 0x1c76b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1c76b4: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x1c76b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c76b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c76b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c76bc: 0x0  nop
    ctx->pc = 0x1c76bcu;
    // NOP
label_1c76c0:
    // 0x1c76c0: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x1c76c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1c76c4: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1C76C4u;
    SET_GPR_U32(ctx, 31, 0x1C76CCu);
    ctx->pc = 0x1C76C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76C4u;
    // 0x1c76c8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1C76C4u, 0x1C76CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76CCu;
label_1c76cc:
    // 0x1c76cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c76ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c76d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76d4: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C76D4u;
    SET_GPR_U32(ctx, 31, 0x1C76DCu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C76D4u, 0x1C76DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76DCu;
label_1c76dc:
    // 0x1c76dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c76dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76e0: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1c76e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x1c76e4: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x1c76e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x1c76e8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1c76e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1c76ec: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C76ECu;
    SET_GPR_U32(ctx, 31, 0x1C76F4u);
    ctx->pc = 0x1C76F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76ECu;
    // 0x1c76f0: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C76ECu, 0x1C76F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76F4u;
label_1c76f4:
    // 0x1c76f4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c76f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76f8: 0x643fff1  bgezl       $s2, . + 4 + (-0xF << 2)
    ctx->pc = 0x1C76F8u;
    {
        const bool branch_taken_0x1c76f8 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1c76f8) {
            ctx->pc = 0x1C76FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C76F8u;
            // 0x1c76fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C76C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c76c0;
        }
    }
    ctx->pc = 0x1C7700u;
label_1c7700:
    // 0x1c7700: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1c7700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7704: 0x640002e  bltz        $s2, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C7704u;
    {
        const bool branch_taken_0x1c7704 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1C7708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7704u;
        // 0x1c7708: 0x8fa50238  lw          $a1, 0x238($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7704) {
            ctx->pc = 0x1C77C0u;
            goto label_1c77c0;
        }
    }
    ctx->pc = 0x1C770Cu;
    // 0x1c770c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1c770cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c7710: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x1c7710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1c7714: 0x0  nop
    ctx->pc = 0x1c7714u;
    // NOP
label_1c7718:
    // 0x1c7718: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c7718u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c771c: 0x4a00020  bltz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C771Cu;
    {
        const bool branch_taken_0x1c771c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1C7720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C771Cu;
        // 0x1c7720: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c771c) {
            ctx->pc = 0x1C77A0u;
            goto label_1c77a0;
        }
    }
    ctx->pc = 0x1C7724u;
    // 0x1c7724: 0x2d29823  subu        $s3, $s6, $s2
    ctx->pc = 0x1c7724u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x1c7728: 0x660001e  bltz        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C7728u;
    {
        const bool branch_taken_0x1c7728 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1C772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7728u;
        // 0x1c772c: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7728) {
            ctx->pc = 0x1C77A4u;
            goto label_1c77a4;
        }
    }
    ctx->pc = 0x1C7730u;
    // 0x1c7730: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1c7730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1c7734: 0x3c080026  lui         $t0, 0x26
    ctx->pc = 0x1c7734u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)38 << 16));
    // 0x1c7738: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1c7738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c773c: 0x2511bad0  addiu       $s1, $t0, -0x4530
    ctx->pc = 0x1c773cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949584));
    // 0x1c7740: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1c7740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c7744: 0x0  nop
    ctx->pc = 0x1c7744u;
    // NOP
label_1c7748:
    // 0x1c7748: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x1c7748u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c774c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x1c774cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1c7750: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x1c7750u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7754: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1c7754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1c7758: 0x7fa60260  sq          $a2, 0x260($sp)
    ctx->pc = 0x1c7758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 6));
    // 0x1c775c: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C775Cu;
    SET_GPR_U32(ctx, 31, 0x1C7764u);
    ctx->pc = 0x1C7760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C775Cu;
    // 0x1c7760: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C775Cu, 0x1C7764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7764u;
label_1c7764:
    // 0x1c7764: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7768: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c776c: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C776Cu;
    SET_GPR_U32(ctx, 31, 0x1C7774u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C776Cu, 0x1C7774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7774u;
label_1c7774:
    // 0x1c7774: 0x2f5182a  slt         $v1, $s7, $s5
    ctx->pc = 0x1c7774u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1c7778: 0x8fa40248  lw          $a0, 0x248($sp)
    ctx->pc = 0x1c7778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1c777c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c777cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7780: 0x95102a  slt         $v0, $a0, $s5
    ctx->pc = 0x1c7780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1c7784: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7784u;
    {
        const bool branch_taken_0x1c7784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7784u;
        // 0x1c7788: 0x7ba60260  lq          $a2, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7784) {
            ctx->pc = 0x1C77A4u;
            goto label_1c77a4;
        }
    }
    ctx->pc = 0x1C778Cu;
    // 0x1c778c: 0x1060ffee  beqz        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C778Cu;
    {
        const bool branch_taken_0x1c778c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C778Cu;
        // 0x1c7790: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c778c) {
            ctx->pc = 0x1C7748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7748;
        }
    }
    ctx->pc = 0x1C7794u;
    // 0x1c7794: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7794u;
    {
        const bool branch_taken_0x1c7794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7794u;
        // 0x1c7798: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7794) {
            ctx->pc = 0x1C77ACu;
            goto label_1c77ac;
        }
    }
    ctx->pc = 0x1C779Cu;
    // 0x1c779c: 0x0  nop
    ctx->pc = 0x1c779cu;
    // NOP
label_1c77a0:
    // 0x1c77a0: 0x2d29823  subu        $s3, $s6, $s2
    ctx->pc = 0x1c77a0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_1c77a4:
    // 0x1c77a4: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x1c77a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1c77a8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1c77a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1c77ac:
    // 0x1c77ac: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1c77acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1c77b0: 0xfc540000  sd          $s4, 0x0($v0)
    ctx->pc = 0x1c77b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 20));
    // 0x1c77b4: 0x641ffd8  bgez        $s2, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1C77B4u;
    {
        const bool branch_taken_0x1c77b4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1C77B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77B4u;
        // 0x1c77b8: 0x8fa50248  lw          $a1, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77b4) {
            ctx->pc = 0x1C7718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7718;
        }
    }
    ctx->pc = 0x1C77BCu;
    // 0x1c77bc: 0x8fa50238  lw          $a1, 0x238($sp)
    ctx->pc = 0x1c77bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_1c77c0:
    // 0x1c77c0: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x1c77c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c77c4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C77C4u;
    {
        const bool branch_taken_0x1c77c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c77c4) {
            ctx->pc = 0x1C77C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C77C4u;
            // 0x1c77c8: 0x8fa60238  lw          $a2, 0x238($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C77E8u;
            goto label_1c77e8;
        }
    }
    ctx->pc = 0x1C77CCu;
    // 0x1c77cc: 0x1ca00026  bgtz        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1C77CCu;
    {
        const bool branch_taken_0x1c77cc = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1C77D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77CCu;
        // 0x1c77d0: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77cc) {
            ctx->pc = 0x1C7868u;
            goto label_1c7868;
        }
    }
    ctx->pc = 0x1C77D4u;
    // 0x1c77d4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C77D4u;
    {
        const bool branch_taken_0x1c77d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77D4u;
        // 0x1c77d8: 0x8fa3024c  lw          $v1, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77d4) {
            ctx->pc = 0x1C7800u;
            goto label_1c7800;
        }
    }
    ctx->pc = 0x1C77DCu;
    // 0x1c77dc: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x1C77DCu;
    {
        const bool branch_taken_0x1c77dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77DCu;
        // 0x1c77e0: 0xdfb00270  ld          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77dc) {
            ctx->pc = 0x1C7ACCu;
            goto label_1c7acc;
        }
    }
    ctx->pc = 0x1C77E4u;
    // 0x1c77e4: 0x0  nop
    ctx->pc = 0x1c77e4u;
    // NOP
label_1c77e8:
    // 0x1c77e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c77ec: 0x10c20054  beq         $a2, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1C77ECu;
    {
        const bool branch_taken_0x1c77ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C77F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77ECu;
        // 0x1c77f0: 0x8fa3024c  lw          $v1, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77ec) {
            ctx->pc = 0x1C7940u;
            goto label_1c7940;
        }
    }
    ctx->pc = 0x1C77F4u;
    // 0x1c77f4: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x1C77F4u;
    {
        const bool branch_taken_0x1c77f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77F4u;
        // 0x1c77f8: 0xdfb00270  ld          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77f4) {
            ctx->pc = 0x1C7ACCu;
            goto label_1c7acc;
        }
    }
    ctx->pc = 0x1C77FCu;
    // 0x1c77fc: 0x0  nop
    ctx->pc = 0x1c77fcu;
    // NOP
label_1c7800:
    // 0x1c7800: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c7800u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7804: 0x640000c  bltz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1C7804u;
    {
        const bool branch_taken_0x1c7804 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1C7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7804u;
        // 0x1c7808: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7804) {
            ctx->pc = 0x1C7838u;
            goto label_1c7838;
        }
    }
    ctx->pc = 0x1C780Cu;
    // 0x1c780c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1c780cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1c7810: 0x468021  addu        $s0, $v0, $a2
    ctx->pc = 0x1c7810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1c7814: 0x0  nop
    ctx->pc = 0x1c7814u;
    // NOP
label_1c7818:
    // 0x1c7818: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x1c7818u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c781c: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x1c781cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1c7820: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7824: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7824u;
    SET_GPR_U32(ctx, 31, 0x1C782Cu);
    ctx->pc = 0x1C7828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7824u;
    // 0x1c7828: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7824u, 0x1C782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C782Cu;
label_1c782c:
    // 0x1c782c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c782cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7830: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C7830u;
    {
        const bool branch_taken_0x1c7830 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1c7830) {
            ctx->pc = 0x1C7818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7818;
        }
    }
    ctx->pc = 0x1C7838u;
label_1c7838:
    // 0x1c7838: 0x8fa80234  lw          $t0, 0x234($sp)
    ctx->pc = 0x1c7838u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1c783c: 0xfd140000  sd          $s4, 0x0($t0)
    ctx->pc = 0x1c783cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 20));
    // 0x1c7840: 0x53c000a1  beql        $fp, $zero, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1C7840u;
    {
        const bool branch_taken_0x1c7840 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7840) {
            ctx->pc = 0x1C7844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7840u;
            // 0x1c7844: 0x8fa3024c  lw          $v1, 0x24C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7AC8u;
            goto label_1c7ac8;
        }
    }
    ctx->pc = 0x1C7848u;
    // 0x1c7848: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c7848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c784c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c784cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7850: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7850u;
    SET_GPR_U32(ctx, 31, 0x1C7858u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7850u, 0x1C7858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7858u;
label_1c7858:
    // 0x1c7858: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x1c7858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1c785c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1c785cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1c7860: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x1C7860u;
    {
        const bool branch_taken_0x1c7860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7860u;
        // 0x1c7864: 0x8fa3024c  lw          $v1, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7860) {
            ctx->pc = 0x1C7AC8u;
            goto label_1c7ac8;
        }
    }
    ctx->pc = 0x1C7868u;
label_1c7868:
    // 0x1c7868: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c7868u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c786c: 0x640000c  bltz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1C786Cu;
    {
        const bool branch_taken_0x1c786c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1C7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C786Cu;
        // 0x1c7870: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c786c) {
            ctx->pc = 0x1C78A0u;
            goto label_1c78a0;
        }
    }
    ctx->pc = 0x1C7874u;
    // 0x1c7874: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1c7874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1c7878: 0x468021  addu        $s0, $v0, $a2
    ctx->pc = 0x1c7878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1c787c: 0x0  nop
    ctx->pc = 0x1c787cu;
    // NOP
label_1c7880:
    // 0x1c7880: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x1c7880u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7884: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x1c7884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1c7888: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c788c: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C788Cu;
    SET_GPR_U32(ctx, 31, 0x1C7894u);
    ctx->pc = 0x1C7890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C788Cu;
    // 0x1c7890: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C788Cu, 0x1C7894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7894u;
label_1c7894:
    // 0x1c7894: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c7894u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7898: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C7898u;
    {
        const bool branch_taken_0x1c7898 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1c7898) {
            ctx->pc = 0x1C7880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7880;
        }
    }
    ctx->pc = 0x1C78A0u;
label_1c78a0:
    // 0x1c78a0: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x1c78a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1c78a4: 0xfc940000  sd          $s4, 0x0($a0)
    ctx->pc = 0x1c78a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 20));
    // 0x1c78a8: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C78A8u;
    {
        const bool branch_taken_0x1c78a8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c78a8) {
            ctx->pc = 0x1C78C8u;
            goto label_1c78c8;
        }
    }
    ctx->pc = 0x1C78B0u;
    // 0x1c78b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c78b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c78b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78b8: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C78B8u;
    SET_GPR_U32(ctx, 31, 0x1C78C0u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C78B8u, 0x1C78C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78C0u;
label_1c78c0:
    // 0x1c78c0: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x1c78c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1c78c4: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x1c78c4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_1c78c8:
    // 0x1c78c8: 0xdfa400f0  ld          $a0, 0xF0($sp)
    ctx->pc = 0x1c78c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c78cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c78ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78d0: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C78D0u;
    SET_GPR_U32(ctx, 31, 0x1C78D8u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C78D0u, 0x1C78D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78D8u;
label_1c78d8:
    // 0x1c78d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c78d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78dc: 0x1ac0000c  blez        $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x1C78DCu;
    {
        const bool branch_taken_0x1c78dc = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1C78E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78DCu;
        // 0x1c78e0: 0x8fa60234  lw          $a2, 0x234($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78dc) {
            ctx->pc = 0x1C7910u;
            goto label_1c7910;
        }
    }
    ctx->pc = 0x1C78E4u;
    // 0x1c78e4: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1c78e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78e8: 0x27b000f8  addiu       $s0, $sp, 0xF8
    ctx->pc = 0x1c78e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1c78ec: 0x0  nop
    ctx->pc = 0x1c78ecu;
    // NOP
label_1c78f0:
    // 0x1c78f0: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x1c78f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c78f4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1c78f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1c78f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c78f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78fc: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C78FCu;
    SET_GPR_U32(ctx, 31, 0x1C7904u);
    ctx->pc = 0x1C7900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78FCu;
    // 0x1c7900: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C78FCu, 0x1C7904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7904u;
label_1c7904:
    // 0x1c7904: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c7904u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7908: 0x1640fff9  bnez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C7908u;
    {
        const bool branch_taken_0x1c7908 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7908u;
        // 0x1c790c: 0x8fa60234  lw          $a2, 0x234($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7908) {
            ctx->pc = 0x1C78F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c78f0;
        }
    }
    ctx->pc = 0x1C7910u;
label_1c7910:
    // 0x1c7910: 0xfcd40008  sd          $s4, 0x8($a2)
    ctx->pc = 0x1c7910u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 20));
    // 0x1c7914: 0x53c0006c  beql        $fp, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x1C7914u;
    {
        const bool branch_taken_0x1c7914 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7914) {
            ctx->pc = 0x1C7918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7914u;
            // 0x1c7918: 0x8fa3024c  lw          $v1, 0x24C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7AC8u;
            goto label_1c7ac8;
        }
    }
    ctx->pc = 0x1C791Cu;
    // 0x1c791c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c791cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7920: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c7920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7924: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7924u;
    SET_GPR_U32(ctx, 31, 0x1C792Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7924u, 0x1C792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C792Cu;
label_1c792c:
    // 0x1c792c: 0x8fa80234  lw          $t0, 0x234($sp)
    ctx->pc = 0x1c792cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1c7930: 0xfd020008  sd          $v0, 0x8($t0)
    ctx->pc = 0x1c7930u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
    // 0x1c7934: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1C7934u;
    {
        const bool branch_taken_0x1c7934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7934u;
        // 0x1c7938: 0x8fa3024c  lw          $v1, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7934) {
            ctx->pc = 0x1C7AC8u;
            goto label_1c7ac8;
        }
    }
    ctx->pc = 0x1C793Cu;
    // 0x1c793c: 0x0  nop
    ctx->pc = 0x1c793cu;
    // NOP
label_1c7940:
    // 0x1c7940: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1c7940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7944: 0x1a400019  blez        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C7944u;
    {
        const bool branch_taken_0x1c7944 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1C7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7944u;
        // 0x1c7948: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7944) {
            ctx->pc = 0x1C79ACu;
            goto label_1c79ac;
        }
    }
    ctx->pc = 0x1C794Cu;
    // 0x1c794c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1c794cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1c7950: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1c7950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1c7954: 0x247300e8  addiu       $s3, $v1, 0xE8
    ctx->pc = 0x1c7954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 232));
label_1c7958:
    // 0x1c7958: 0xde700000  ld          $s0, 0x0($s3)
    ctx->pc = 0x1c7958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c795c: 0xde710008  ld          $s1, 0x8($s3)
    ctx->pc = 0x1c795cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1c7960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7964: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c7964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7968: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7968u;
    SET_GPR_U32(ctx, 31, 0x1C7970u);
    ctx->pc = 0x1C796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7968u;
    // 0x1c796c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7968u, 0x1C7970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7970u;
label_1c7970:
    // 0x1c7970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7974: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c7974u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7978: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c7978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c797c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C797Cu;
    SET_GPR_U32(ctx, 31, 0x1C7984u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C797Cu, 0x1C7984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7984u;
label_1c7984:
    // 0x1c7984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c7984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7988: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c798c: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C798Cu;
    SET_GPR_U32(ctx, 31, 0x1C7994u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C798Cu, 0x1C7994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7994u;
label_1c7994:
    // 0x1c7994: 0xfe740000  sd          $s4, 0x0($s3)
    ctx->pc = 0x1c7994u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 20));
    // 0x1c7998: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x1c7998u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x1c799c: 0x1e40ffee  bgtz        $s2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C799Cu;
    {
        const bool branch_taken_0x1c799c = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x1C79A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C799Cu;
        // 0x1c79a0: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c799c) {
            ctx->pc = 0x1C7958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7958;
        }
    }
    ctx->pc = 0x1C79A4u;
    // 0x1c79a4: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1c79a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79a8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1c79a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c79ac:
    // 0x1c79ac: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C79ACu;
    {
        const bool branch_taken_0x1c79ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c79ac) {
            ctx->pc = 0x1C79B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C79ACu;
            // 0x1c79b0: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7A14u;
            goto label_1c7a14;
        }
    }
    ctx->pc = 0x1C79B4u;
    // 0x1c79b4: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1c79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1c79b8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1c79b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1c79bc: 0x247300e8  addiu       $s3, $v1, 0xE8
    ctx->pc = 0x1c79bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 232));
label_1c79c0:
    // 0x1c79c0: 0xde700000  ld          $s0, 0x0($s3)
    ctx->pc = 0x1c79c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c79c4: 0xde710008  ld          $s1, 0x8($s3)
    ctx->pc = 0x1c79c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1c79c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c79c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c79ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79d0: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C79D0u;
    SET_GPR_U32(ctx, 31, 0x1C79D8u);
    ctx->pc = 0x1C79D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C79D0u;
    // 0x1c79d4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C79D0u, 0x1C79D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79D8u;
label_1c79d8:
    // 0x1c79d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c79d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c79dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c79e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79e4: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C79E4u;
    SET_GPR_U32(ctx, 31, 0x1C79ECu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C79E4u, 0x1C79ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79ECu;
label_1c79ec:
    // 0x1c79ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c79ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c79f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79f4: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C79F4u;
    SET_GPR_U32(ctx, 31, 0x1C79FCu);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C79F4u, 0x1C79FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79FCu;
label_1c79fc:
    // 0x1c79fc: 0xfe740000  sd          $s4, 0x0($s3)
    ctx->pc = 0x1c79fcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 20));
    // 0x1c7a00: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x1c7a00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c7a04: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x1c7a04u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x1c7a08: 0x1060ffed  beqz        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1C7A08u;
    {
        const bool branch_taken_0x1c7a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A08u;
        // 0x1c7a0c: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a08) {
            ctx->pc = 0x1C79C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c79c0;
        }
    }
    ctx->pc = 0x1C7A10u;
    // 0x1c7a10: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1c7a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c7a14:
    // 0x1c7a14: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c7a14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7a18: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1c7a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c7a1c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C7A1Cu;
    {
        const bool branch_taken_0x1c7a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A1Cu;
        // 0x1c7a20: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a1c) {
            ctx->pc = 0x1C7A54u;
            goto label_1c7a54;
        }
    }
    ctx->pc = 0x1C7A24u;
    // 0x1c7a24: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1c7a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1c7a28: 0x468021  addu        $s0, $v0, $a2
    ctx->pc = 0x1c7a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1c7a2c: 0x0  nop
    ctx->pc = 0x1c7a2cu;
    // NOP
label_1c7a30:
    // 0x1c7a30: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x1c7a30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7a34: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x1c7a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1c7a38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7a3c: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7A3Cu;
    SET_GPR_U32(ctx, 31, 0x1C7A44u);
    ctx->pc = 0x1C7A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A3Cu;
    // 0x1c7a40: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7A3Cu, 0x1C7A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A44u;
label_1c7a44:
    // 0x1c7a44: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c7a44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7a48: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1c7a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c7a4c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C7A4Cu;
    {
        const bool branch_taken_0x1c7a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7a4c) {
            ctx->pc = 0x1C7A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7a30;
        }
    }
    ctx->pc = 0x1C7A54u;
label_1c7a54:
    // 0x1c7a54: 0x17c00008  bnez        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7A54u;
    {
        const bool branch_taken_0x1c7a54 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A54u;
        // 0x1c7a58: 0x8fa40234  lw          $a0, 0x234($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a54) {
            ctx->pc = 0x1C7A78u;
            goto label_1c7a78;
        }
    }
    ctx->pc = 0x1C7A5Cu;
    // 0x1c7a5c: 0xdfa200f0  ld          $v0, 0xF0($sp)
    ctx->pc = 0x1c7a5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c7a60: 0xdfa300f8  ld          $v1, 0xF8($sp)
    ctx->pc = 0x1c7a60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1c7a64: 0xfc940010  sd          $s4, 0x10($a0)
    ctx->pc = 0x1c7a64u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 20));
    // 0x1c7a68: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1c7a68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x1c7a6c: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1c7a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1c7a70: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C7A70u;
    {
        const bool branch_taken_0x1c7a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A70u;
        // 0x1c7a74: 0x8fa3024c  lw          $v1, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a70) {
            ctx->pc = 0x1C7AC8u;
            goto label_1c7ac8;
        }
    }
    ctx->pc = 0x1C7A78u;
label_1c7a78:
    // 0x1c7a78: 0xdfa500f0  ld          $a1, 0xF0($sp)
    ctx->pc = 0x1c7a78u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c7a7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c7a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7a84: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7A84u;
    SET_GPR_U32(ctx, 31, 0x1C7A8Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7A84u, 0x1C7A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A8Cu;
label_1c7a8c:
    // 0x1c7a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7a90: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x1c7a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1c7a94: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x1c7a94u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x1c7a98: 0xdfa500f8  ld          $a1, 0xF8($sp)
    ctx->pc = 0x1c7a98u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1c7a9c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7A9Cu;
    SET_GPR_U32(ctx, 31, 0x1C7AA4u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7A9Cu, 0x1C7AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7AA4u;
label_1c7aa4:
    // 0x1c7aa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7aa8: 0x8fa60234  lw          $a2, 0x234($sp)
    ctx->pc = 0x1c7aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1c7aac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c7aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ab0: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x1c7ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x1c7ab4: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7AB4u;
    SET_GPR_U32(ctx, 31, 0x1C7ABCu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7AB4u, 0x1C7ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7ABCu;
label_1c7abc:
    // 0x1c7abc: 0x8fa80234  lw          $t0, 0x234($sp)
    ctx->pc = 0x1c7abcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1c7ac0: 0xfd020010  sd          $v0, 0x10($t0)
    ctx->pc = 0x1c7ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
    // 0x1c7ac4: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x1c7ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_1c7ac8:
    // 0x1c7ac8: 0xdfb00270  ld          $s0, 0x270($sp)
    ctx->pc = 0x1c7ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1c7acc:
    // 0x1c7acc: 0xdfb10278  ld          $s1, 0x278($sp)
    ctx->pc = 0x1c7accu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x1c7ad0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1c7ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1c7ad4: 0xdfb20280  ld          $s2, 0x280($sp)
    ctx->pc = 0x1c7ad4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1c7ad8: 0xdfb30288  ld          $s3, 0x288($sp)
    ctx->pc = 0x1c7ad8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x1c7adc: 0xdfb40290  ld          $s4, 0x290($sp)
    ctx->pc = 0x1c7adcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1c7ae0: 0xdfb50298  ld          $s5, 0x298($sp)
    ctx->pc = 0x1c7ae0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1c7ae4: 0xdfb602a0  ld          $s6, 0x2A0($sp)
    ctx->pc = 0x1c7ae4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1c7ae8: 0xdfb702a8  ld          $s7, 0x2A8($sp)
    ctx->pc = 0x1c7ae8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x1c7aec: 0xdfbe02b0  ld          $fp, 0x2B0($sp)
    ctx->pc = 0x1c7aecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1c7af0: 0xdfbf02b8  ld          $ra, 0x2B8($sp)
    ctx->pc = 0x1c7af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x1c7af4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AF4u;
        // 0x1c7af8: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7AFCu;
}
