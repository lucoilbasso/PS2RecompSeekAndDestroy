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

// Function: _doMC
// Address: 0x1bf928 - 0x1bfb44
void _doMC_0x1bf928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_doMC_0x1bf928");
#endif

    switch (ctx->pc) {
        case 0x1bf928u: goto label_1bf928;
        case 0x1bf92cu: goto label_1bf92c;
        case 0x1bf930u: goto label_1bf930;
        case 0x1bf934u: goto label_1bf934;
        case 0x1bf938u: goto label_1bf938;
        case 0x1bf93cu: goto label_1bf93c;
        case 0x1bf940u: goto label_1bf940;
        case 0x1bf944u: goto label_1bf944;
        case 0x1bf948u: goto label_1bf948;
        case 0x1bf94cu: goto label_1bf94c;
        case 0x1bf950u: goto label_1bf950;
        case 0x1bf954u: goto label_1bf954;
        case 0x1bf958u: goto label_1bf958;
        case 0x1bf95cu: goto label_1bf95c;
        case 0x1bf960u: goto label_1bf960;
        case 0x1bf964u: goto label_1bf964;
        case 0x1bf968u: goto label_1bf968;
        case 0x1bf96cu: goto label_1bf96c;
        case 0x1bf970u: goto label_1bf970;
        case 0x1bf974u: goto label_1bf974;
        case 0x1bf978u: goto label_1bf978;
        case 0x1bf97cu: goto label_1bf97c;
        case 0x1bf980u: goto label_1bf980;
        case 0x1bf984u: goto label_1bf984;
        case 0x1bf988u: goto label_1bf988;
        case 0x1bf98cu: goto label_1bf98c;
        case 0x1bf990u: goto label_1bf990;
        case 0x1bf994u: goto label_1bf994;
        case 0x1bf998u: goto label_1bf998;
        case 0x1bf99cu: goto label_1bf99c;
        case 0x1bf9a0u: goto label_1bf9a0;
        case 0x1bf9a4u: goto label_1bf9a4;
        case 0x1bf9a8u: goto label_1bf9a8;
        case 0x1bf9acu: goto label_1bf9ac;
        case 0x1bf9b0u: goto label_1bf9b0;
        case 0x1bf9b4u: goto label_1bf9b4;
        case 0x1bf9b8u: goto label_1bf9b8;
        case 0x1bf9bcu: goto label_1bf9bc;
        case 0x1bf9c0u: goto label_1bf9c0;
        case 0x1bf9c4u: goto label_1bf9c4;
        case 0x1bf9c8u: goto label_1bf9c8;
        case 0x1bf9ccu: goto label_1bf9cc;
        case 0x1bf9d0u: goto label_1bf9d0;
        case 0x1bf9d4u: goto label_1bf9d4;
        case 0x1bf9d8u: goto label_1bf9d8;
        case 0x1bf9dcu: goto label_1bf9dc;
        case 0x1bf9e0u: goto label_1bf9e0;
        case 0x1bf9e4u: goto label_1bf9e4;
        case 0x1bf9e8u: goto label_1bf9e8;
        case 0x1bf9ecu: goto label_1bf9ec;
        case 0x1bf9f0u: goto label_1bf9f0;
        case 0x1bf9f4u: goto label_1bf9f4;
        case 0x1bf9f8u: goto label_1bf9f8;
        case 0x1bf9fcu: goto label_1bf9fc;
        case 0x1bfa00u: goto label_1bfa00;
        case 0x1bfa04u: goto label_1bfa04;
        case 0x1bfa08u: goto label_1bfa08;
        case 0x1bfa0cu: goto label_1bfa0c;
        case 0x1bfa10u: goto label_1bfa10;
        case 0x1bfa14u: goto label_1bfa14;
        case 0x1bfa18u: goto label_1bfa18;
        case 0x1bfa1cu: goto label_1bfa1c;
        case 0x1bfa20u: goto label_1bfa20;
        case 0x1bfa24u: goto label_1bfa24;
        case 0x1bfa28u: goto label_1bfa28;
        case 0x1bfa2cu: goto label_1bfa2c;
        case 0x1bfa30u: goto label_1bfa30;
        case 0x1bfa34u: goto label_1bfa34;
        case 0x1bfa38u: goto label_1bfa38;
        case 0x1bfa3cu: goto label_1bfa3c;
        case 0x1bfa40u: goto label_1bfa40;
        case 0x1bfa44u: goto label_1bfa44;
        case 0x1bfa48u: goto label_1bfa48;
        case 0x1bfa4cu: goto label_1bfa4c;
        case 0x1bfa50u: goto label_1bfa50;
        case 0x1bfa54u: goto label_1bfa54;
        case 0x1bfa58u: goto label_1bfa58;
        case 0x1bfa5cu: goto label_1bfa5c;
        case 0x1bfa60u: goto label_1bfa60;
        case 0x1bfa64u: goto label_1bfa64;
        case 0x1bfa68u: goto label_1bfa68;
        case 0x1bfa6cu: goto label_1bfa6c;
        case 0x1bfa70u: goto label_1bfa70;
        case 0x1bfa74u: goto label_1bfa74;
        case 0x1bfa78u: goto label_1bfa78;
        case 0x1bfa7cu: goto label_1bfa7c;
        case 0x1bfa80u: goto label_1bfa80;
        case 0x1bfa84u: goto label_1bfa84;
        case 0x1bfa88u: goto label_1bfa88;
        case 0x1bfa8cu: goto label_1bfa8c;
        case 0x1bfa90u: goto label_1bfa90;
        case 0x1bfa94u: goto label_1bfa94;
        case 0x1bfa98u: goto label_1bfa98;
        case 0x1bfa9cu: goto label_1bfa9c;
        case 0x1bfaa0u: goto label_1bfaa0;
        case 0x1bfaa4u: goto label_1bfaa4;
        case 0x1bfaa8u: goto label_1bfaa8;
        case 0x1bfaacu: goto label_1bfaac;
        case 0x1bfab0u: goto label_1bfab0;
        case 0x1bfab4u: goto label_1bfab4;
        case 0x1bfab8u: goto label_1bfab8;
        case 0x1bfabcu: goto label_1bfabc;
        case 0x1bfac0u: goto label_1bfac0;
        case 0x1bfac4u: goto label_1bfac4;
        case 0x1bfac8u: goto label_1bfac8;
        case 0x1bfaccu: goto label_1bfacc;
        case 0x1bfad0u: goto label_1bfad0;
        case 0x1bfad4u: goto label_1bfad4;
        case 0x1bfad8u: goto label_1bfad8;
        case 0x1bfadcu: goto label_1bfadc;
        case 0x1bfae0u: goto label_1bfae0;
        case 0x1bfae4u: goto label_1bfae4;
        case 0x1bfae8u: goto label_1bfae8;
        case 0x1bfaecu: goto label_1bfaec;
        case 0x1bfaf0u: goto label_1bfaf0;
        case 0x1bfaf4u: goto label_1bfaf4;
        case 0x1bfaf8u: goto label_1bfaf8;
        case 0x1bfafcu: goto label_1bfafc;
        case 0x1bfb00u: goto label_1bfb00;
        case 0x1bfb04u: goto label_1bfb04;
        case 0x1bfb08u: goto label_1bfb08;
        case 0x1bfb0cu: goto label_1bfb0c;
        case 0x1bfb10u: goto label_1bfb10;
        case 0x1bfb14u: goto label_1bfb14;
        case 0x1bfb18u: goto label_1bfb18;
        case 0x1bfb1cu: goto label_1bfb1c;
        case 0x1bfb20u: goto label_1bfb20;
        case 0x1bfb24u: goto label_1bfb24;
        case 0x1bfb28u: goto label_1bfb28;
        case 0x1bfb2cu: goto label_1bfb2c;
        case 0x1bfb30u: goto label_1bfb30;
        case 0x1bfb34u: goto label_1bfb34;
        case 0x1bfb38u: goto label_1bfb38;
        case 0x1bfb3cu: goto label_1bfb3c;
        case 0x1bfb40u: goto label_1bfb40;
        default: break;
    }

    ctx->pc = 0x1bf928u;

label_1bf928:
    // 0x1bf928: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1bf928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1bf92c:
    // 0x1bf92c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1bf92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1bf930:
    // 0x1bf930: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bf930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1bf934:
    // 0x1bf934: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1bf934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1bf938:
    // 0x1bf938: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1bf938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1bf93c:
    // 0x1bf93c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1bf93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1bf940:
    // 0x1bf940: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1bf940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_1bf944:
    // 0x1bf944: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1bf944u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf948:
    // 0x1bf948: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1bf948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_1bf94c:
    // 0x1bf94c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1bf94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1bf950:
    // 0x1bf950: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1bf950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1bf954:
    // 0x1bf954: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x1bf954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1bf958:
    // 0x1bf958: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1bf958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1bf95c:
    // 0x1bf95c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1bf95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1bf960:
    // 0x1bf960: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1bf960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1bf964:
    // 0x1bf964: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1bf964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1bf968:
    // 0x1bf968: 0x8c4306c8  lw          $v1, 0x6C8($v0)
    ctx->pc = 0x1bf968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1736)));
label_1bf96c:
    // 0x1bf96c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_1bf970:
    if (ctx->pc == 0x1BF970u) {
        ctx->pc = 0x1BF970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF96Cu;
        // 0x1bf970: 0x268206bc  addiu       $v0, $s4, 0x6BC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1724));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF974u;
        goto label_1bf974;
    }
    ctx->pc = 0x1BF96Cu;
    {
        const bool branch_taken_0x1bf96c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF96Cu;
        // 0x1bf970: 0x268206bc  addiu       $v0, $s4, 0x6BC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1724));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf96c) {
            ctx->pc = 0x1BFA0Cu;
            goto label_1bfa0c;
        }
    }
    ctx->pc = 0x1BF974u;
label_1bf974:
    // 0x1bf974: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1bf974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1bf978:
    // 0x1bf978: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bf978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1bf97c:
    // 0x1bf97c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bf97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bf980:
    // 0x1bf980: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
label_1bf984:
    if (ctx->pc == 0x1BF984u) {
        ctx->pc = 0x1BF984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF980u;
        // 0x1bf984: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF988u;
        goto label_1bf988;
    }
    ctx->pc = 0x1BF980u;
    {
        const bool branch_taken_0x1bf980 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1BF984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF980u;
        // 0x1bf984: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf980) {
            ctx->pc = 0x1BFA1Cu;
            goto label_1bfa1c;
        }
    }
    ctx->pc = 0x1BF988u;
label_1bf988:
    // 0x1bf988: 0x268306c0  addiu       $v1, $s4, 0x6C0
    ctx->pc = 0x1bf988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1728));
label_1bf98c:
    // 0x1bf98c: 0x269705b8  addiu       $s7, $s4, 0x5B8
    ctx->pc = 0x1bf98cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1464));
label_1bf990:
    // 0x1bf990: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1bf990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1bf994:
    // 0x1bf994: 0x269605c8  addiu       $s6, $s4, 0x5C8
    ctx->pc = 0x1bf994u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1480));
label_1bf998:
    // 0x1bf998: 0x269e06b8  addiu       $fp, $s4, 0x6B8
    ctx->pc = 0x1bf998u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1720));
label_1bf99c:
    // 0x1bf99c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bf99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf9a0:
    // 0x1bf9a0: 0x24110140  addiu       $s1, $zero, 0x140
    ctx->pc = 0x1bf9a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1bf9a4:
    // 0x1bf9a4: 0x2413001c  addiu       $s3, $zero, 0x1C
    ctx->pc = 0x1bf9a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1bf9a8:
    // 0x1bf9a8: 0x158080  sll         $s0, $s5, 2
    ctx->pc = 0x1bf9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1bf9ac:
    // 0x1bf9ac: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x1bf9acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_1bf9b0:
    // 0x1bf9b0: 0x72b39818  mult1       $s3, $s5, $s3
    ctx->pc = 0x1bf9b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_1bf9b4:
    // 0x1bf9b4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1bf9b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1bf9b8:
    // 0x1bf9b8: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1bf9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1bf9bc:
    // 0x1bf9bc: 0x26320590  addiu       $s2, $s1, 0x590
    ctx->pc = 0x1bf9bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
label_1bf9c0:
    // 0x1bf9c0: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x1bf9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_1bf9c4:
    // 0x1bf9c4: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x1bf9c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1bf9c8:
    // 0x1bf9c8: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x1bf9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_1bf9cc:
    // 0x1bf9cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bf9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bf9d0:
    // 0x1bf9d0: 0x60f809  jalr        $v1
label_1bf9d4:
    if (ctx->pc == 0x1BF9D4u) {
        ctx->pc = 0x1BF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9D0u;
        // 0x1bf9d4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9D8u;
        goto label_1bf9d8;
    }
    ctx->pc = 0x1BF9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BF9D8u);
        ctx->pc = 0x1BF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9D0u;
        // 0x1bf9d4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF9D0u, 0x1BF9D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF9D8u;
label_1bf9d8:
    // 0x1bf9d8: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x1bf9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_1bf9dc:
    // 0x1bf9dc: 0x267300b8  addiu       $s3, $s3, 0xB8
    ctx->pc = 0x1bf9dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 184));
label_1bf9e0:
    // 0x1bf9e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bf9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bf9e4:
    // 0x1bf9e4: 0x40f809  jalr        $v0
label_1bf9e8:
    if (ctx->pc == 0x1BF9E8u) {
        ctx->pc = 0x1BF9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9E4u;
        // 0x1bf9e8: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9ECu;
        goto label_1bf9ec;
    }
    ctx->pc = 0x1BF9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF9ECu);
        ctx->pc = 0x1BF9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9E4u;
        // 0x1bf9e8: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF9E4u, 0x1BF9ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF9ECu;
label_1bf9ec:
    // 0x1bf9ec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1bf9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1bf9f0:
    // 0x1bf9f0: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x1bf9f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1bf9f4:
    // 0x1bf9f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bf9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bf9f8:
    // 0x1bf9f8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1bf9f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1bf9fc:
    // 0x1bf9fc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_1bfa00:
    if (ctx->pc == 0x1BFA00u) {
        ctx->pc = 0x1BFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9FCu;
        // 0x1bfa00: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA04u;
        goto label_1bfa04;
    }
    ctx->pc = 0x1BF9FCu;
    {
        const bool branch_taken_0x1bf9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9FCu;
        // 0x1bfa00: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf9fc) {
            ctx->pc = 0x1BF9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf9a0;
        }
    }
    ctx->pc = 0x1BFA04u;
label_1bfa04:
    // 0x1bfa04: 0x10000009  b           . + 4 + (0x9 << 2)
label_1bfa08:
    if (ctx->pc == 0x1BFA08u) {
        ctx->pc = 0x1BFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA04u;
        // 0x1bfa08: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA0Cu;
        goto label_1bfa0c;
    }
    ctx->pc = 0x1BFA04u;
    {
        const bool branch_taken_0x1bfa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA04u;
        // 0x1bfa08: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa04) {
            ctx->pc = 0x1BFA2Cu;
            goto label_1bfa2c;
        }
    }
    ctx->pc = 0x1BFA0Cu;
label_1bfa0c:
    // 0x1bfa0c: 0x268206c0  addiu       $v0, $s4, 0x6C0
    ctx->pc = 0x1bfa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1728));
label_1bfa10:
    // 0x1bfa10: 0x269e06b8  addiu       $fp, $s4, 0x6B8
    ctx->pc = 0x1bfa10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1720));
label_1bfa14:
    // 0x1bfa14: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bfa18:
    if (ctx->pc == 0x1BFA18u) {
        ctx->pc = 0x1BFA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA14u;
        // 0x1bfa18: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA1Cu;
        goto label_1bfa1c;
    }
    ctx->pc = 0x1BFA14u;
    {
        const bool branch_taken_0x1bfa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA14u;
        // 0x1bfa18: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa14) {
            ctx->pc = 0x1BFA28u;
            goto label_1bfa28;
        }
    }
    ctx->pc = 0x1BFA1Cu;
label_1bfa1c:
    // 0x1bfa1c: 0x268306c0  addiu       $v1, $s4, 0x6C0
    ctx->pc = 0x1bfa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1728));
label_1bfa20:
    // 0x1bfa20: 0x269e06b8  addiu       $fp, $s4, 0x6B8
    ctx->pc = 0x1bfa20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1720));
label_1bfa24:
    // 0x1bfa24: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1bfa24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1bfa28:
    // 0x1bfa28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1bfa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1bfa2c:
    // 0x1bfa2c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1bfa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1bfa30:
    // 0x1bfa30: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1bfa30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1bfa34:
    // 0x1bfa34: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1bfa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1bfa38:
    // 0x1bfa38: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1bfa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1bfa3c:
    // 0x1bfa3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bfa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bfa40:
    // 0x1bfa40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1bfa44:
    if (ctx->pc == 0x1BFA44u) {
        ctx->pc = 0x1BFA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA40u;
        // 0x1bfa44: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA48u;
        goto label_1bfa48;
    }
    ctx->pc = 0x1BFA40u;
    {
        const bool branch_taken_0x1bfa40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA40u;
        // 0x1bfa44: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa40) {
            ctx->pc = 0x1BFA60u;
            goto label_1bfa60;
        }
    }
    ctx->pc = 0x1BFA48u;
label_1bfa48:
    // 0x1bfa48: 0x8c4306cc  lw          $v1, 0x6CC($v0)
    ctx->pc = 0x1bfa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1740)));
label_1bfa4c:
    // 0x1bfa4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1bfa50:
    if (ctx->pc == 0x1BFA50u) {
        ctx->pc = 0x1BFA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA4Cu;
        // 0x1bfa50: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA54u;
        goto label_1bfa54;
    }
    ctx->pc = 0x1BFA4Cu;
    {
        const bool branch_taken_0x1bfa4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA4Cu;
        // 0x1bfa50: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa4c) {
            ctx->pc = 0x1BFA60u;
            goto label_1bfa60;
        }
    }
    ctx->pc = 0x1BFA54u;
label_1bfa54:
    // 0x1bfa54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bfa54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bfa58:
    // 0x1bfa58: 0xc06f8a0  jal         func_1BE280
label_1bfa5c:
    if (ctx->pc == 0x1BFA5Cu) {
        ctx->pc = 0x1BFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA58u;
        // 0x1bfa5c: 0x24a5b4d8  addiu       $a1, $a1, -0x4B28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA60u;
        goto label_1bfa60;
    }
    ctx->pc = 0x1BFA58u;
    SET_GPR_U32(ctx, 31, 0x1BFA60u);
    ctx->pc = 0x1BFA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFA58u;
    // 0x1bfa5c: 0x24a5b4d8  addiu       $a1, $a1, -0x4B28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1BFA58u, 0x1BFA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA60u;
label_1bfa60:
    // 0x1bfa60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1bfa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1bfa64:
    // 0x1bfa64: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1bfa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1bfa68:
    // 0x1bfa68: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x1bfa68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1bfa6c:
    // 0x1bfa6c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1bfa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1bfa70:
    // 0x1bfa70: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1bfa70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1bfa74:
    // 0x1bfa74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bfa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bfa78:
    // 0x1bfa78: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1bfa7c:
    if (ctx->pc == 0x1BFA7Cu) {
        ctx->pc = 0x1BFA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA78u;
        // 0x1bfa7c: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA80u;
        goto label_1bfa80;
    }
    ctx->pc = 0x1BFA78u;
    {
        const bool branch_taken_0x1bfa78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA78u;
        // 0x1bfa7c: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa78) {
            ctx->pc = 0x1BFAC0u;
            goto label_1bfac0;
        }
    }
    ctx->pc = 0x1BFA80u;
label_1bfa80:
    // 0x1bfa80: 0x3c51021  addu        $v0, $fp, $a1
    ctx->pc = 0x1bfa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_1bfa84:
    // 0x1bfa84: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x1bfa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1bfa88:
    // 0x1bfa88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bfa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bfa8c:
    // 0x1bfa8c: 0x8c650594  lw          $a1, 0x594($v1)
    ctx->pc = 0x1bfa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1428)));
label_1bfa90:
    // 0x1bfa90: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1bfa90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1bfa94:
    // 0x1bfa94: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1bfa94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1bfa98:
    // 0x1bfa98: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1bfa98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1bfa9c:
    // 0x1bfa9c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1bfa9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1bfaa0:
    // 0x1bfaa0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1bfaa0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1bfaa4:
    // 0x1bfaa4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1bfaa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1bfaa8:
    // 0x1bfaa8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1bfaa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bfaac:
    // 0x1bfaac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1bfaacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bfab0:
    // 0x1bfab0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1bfab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bfab4:
    // 0x1bfab4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1bfab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bfab8:
    // 0x1bfab8: 0x8070226  j           func_1C0898
label_1bfabc:
    if (ctx->pc == 0x1BFABCu) {
        ctx->pc = 0x1BFABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAB8u;
        // 0x1bfabc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFAC0u;
        goto label_1bfac0;
    }
    ctx->pc = 0x1BFAB8u;
    ctx->pc = 0x1BFABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFAB8u;
    // 0x1bfabc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0898u;
    _copyRefImage_0x1c0898(rdram, ctx, runtime); return;
    ctx->pc = 0x1BFAC0u;
label_1bfac0:
    // 0x1bfac0: 0x8c4306cc  lw          $v1, 0x6CC($v0)
    ctx->pc = 0x1bfac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1740)));
label_1bfac4:
    // 0x1bfac4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1bfac8:
    if (ctx->pc == 0x1BFAC8u) {
        ctx->pc = 0x1BFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAC4u;
        // 0x1bfac8: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFACCu;
        goto label_1bfacc;
    }
    ctx->pc = 0x1BFAC4u;
    {
        const bool branch_taken_0x1bfac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAC4u;
        // 0x1bfac8: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfac4) {
            ctx->pc = 0x1BFB04u;
            goto label_1bfb04;
        }
    }
    ctx->pc = 0x1BFACCu;
label_1bfacc:
    // 0x1bfacc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1bfaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1bfad0:
    // 0x1bfad0: 0x8e85081c  lw          $a1, 0x81C($s4)
    ctx->pc = 0x1bfad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2076)));
label_1bfad4:
    // 0x1bfad4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bfad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bfad8:
    // 0x1bfad8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1bfad8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1bfadc:
    // 0x1bfadc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1bfadcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1bfae0:
    // 0x1bfae0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1bfae0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1bfae4:
    // 0x1bfae4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1bfae4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1bfae8:
    // 0x1bfae8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1bfae8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1bfaec:
    // 0x1bfaec: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1bfaecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bfaf0:
    // 0x1bfaf0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1bfaf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bfaf4:
    // 0x1bfaf4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1bfaf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bfaf8:
    // 0x1bfaf8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1bfaf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bfafc:
    // 0x1bfafc: 0x8070226  j           func_1C0898
label_1bfb00:
    if (ctx->pc == 0x1BFB00u) {
        ctx->pc = 0x1BFB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAFCu;
        // 0x1bfb00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB04u;
        goto label_1bfb04;
    }
    ctx->pc = 0x1BFAFCu;
    ctx->pc = 0x1BFB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFAFCu;
    // 0x1bfb00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0898u;
    _copyRefImage_0x1c0898(rdram, ctx, runtime); return;
    ctx->pc = 0x1BFB04u;
label_1bfb04:
    // 0x1bfb04: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x1bfb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1bfb08:
    // 0x1bfb08: 0x8e85081c  lw          $a1, 0x81C($s4)
    ctx->pc = 0x1bfb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2076)));
label_1bfb0c:
    // 0x1bfb0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bfb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bfb10:
    // 0x1bfb10: 0x8c660594  lw          $a2, 0x594($v1)
    ctx->pc = 0x1bfb10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1428)));
label_1bfb14:
    // 0x1bfb14: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1bfb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1bfb18:
    // 0x1bfb18: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1bfb18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1bfb1c:
    // 0x1bfb1c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1bfb1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1bfb20:
    // 0x1bfb20: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1bfb20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1bfb24:
    // 0x1bfb24: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1bfb24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1bfb28:
    // 0x1bfb28: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1bfb28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1bfb2c:
    // 0x1bfb2c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1bfb2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bfb30:
    // 0x1bfb30: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1bfb30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bfb34:
    // 0x1bfb34: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1bfb34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bfb38:
    // 0x1bfb38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1bfb38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bfb3c:
    // 0x1bfb3c: 0x807020e  j           func_1C0838
label_1bfb40:
    if (ctx->pc == 0x1BFB40u) {
        ctx->pc = 0x1BFB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB3Cu;
        // 0x1bfb40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB44u;
        goto label_fallthrough_0x1bfb3c;
    }
    ctx->pc = 0x1BFB3Cu;
    ctx->pc = 0x1BFB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB3Cu;
    // 0x1bfb40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0838u;
    _copyAddRefImage_0x1c0838(rdram, ctx, runtime); return;
label_fallthrough_0x1bfb3c:
    ctx->pc = 0x1BFB44u;
}
