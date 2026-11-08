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

// Function: MakeColorExec__11WVColorCtrlP8WcObjecti
// Address: 0x193fe8 - 0x19418c
void MakeColorExec__11WVColorCtrlP8WcObjecti_0x193fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeColorExec__11WVColorCtrlP8WcObjecti_0x193fe8");
#endif

    switch (ctx->pc) {
        case 0x19401cu: goto label_19401c;
        case 0x194024u: goto label_194024;
        case 0x19402cu: goto label_19402c;
        case 0x194034u: goto label_194034;
        case 0x194060u: goto label_194060;
        case 0x19414cu: goto label_19414c;
        case 0x194154u: goto label_194154;
        case 0x19415cu: goto label_19415c;
        case 0x194164u: goto label_194164;
        case 0x19416cu: goto label_19416c;
        default: break;
    }

    ctx->pc = 0x193fe8u;

    // 0x193fe8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193fec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x193fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x193ff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ff4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x193ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x193ff8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x193ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ffc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x193ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x194000: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x194000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x194004: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x194004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x194008: 0x1051005a  beq         $v0, $s1, . + 4 + (0x5A << 2)
    ctx->pc = 0x194008u;
    {
        const bool branch_taken_0x194008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x19400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194008u;
        // 0x19400c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194008) {
            ctx->pc = 0x194174u;
            goto label_194174;
        }
    }
    ctx->pc = 0x194010u;
    // 0x194010: 0x2452d650  addiu       $s2, $v0, -0x29B0
    ctx->pc = 0x194010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x194014: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x194014u;
    SET_GPR_U32(ctx, 31, 0x19401Cu);
    ctx->pc = 0x194018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194014u;
    // 0x194018: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x194014u, 0x19401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19401Cu;
label_19401c:
    // 0x19401c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x19401Cu;
    SET_GPR_U32(ctx, 31, 0x194024u);
    ctx->pc = 0x194020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19401Cu;
    // 0x194020: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x19401Cu, 0x194024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194024u;
label_194024:
    // 0x194024: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x194024u;
    SET_GPR_U32(ctx, 31, 0x19402Cu);
    ctx->pc = 0x194028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194024u;
    // 0x194028: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x194024u, 0x19402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19402Cu;
label_19402c:
    // 0x19402c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x19402Cu;
    SET_GPR_U32(ctx, 31, 0x194034u);
    ctx->pc = 0x194030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19402Cu;
    // 0x194030: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x19402Cu, 0x194034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194034u;
label_194034:
    // 0x194034: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194038: 0xae400098  sw          $zero, 0x98($s2)
    ctx->pc = 0x194038u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
    // 0x19403c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x19403cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x194040: 0xae430094  sw          $v1, 0x94($s2)
    ctx->pc = 0x194040u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 3));
    // 0x194044: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x194044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x194048: 0x244affff  addiu       $t2, $v0, -0x1
    ctx->pc = 0x194048u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19404c: 0x540003b  bltz        $t2, . + 4 + (0x3B << 2)
    ctx->pc = 0x19404Cu;
    {
        const bool branch_taken_0x19404c = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x194050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19404Cu;
        // 0x194050: 0x8e0b001c  lw          $t3, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19404c) {
            ctx->pc = 0x19413Cu;
            goto label_19413c;
        }
    }
    ctx->pc = 0x194054u;
    // 0x194054: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x194054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x194058: 0x464821  addu        $t1, $v0, $a2
    ctx->pc = 0x194058u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x19405c: 0x0  nop
    ctx->pc = 0x19405cu;
    // NOP
label_194060:
    // 0x194060: 0x22b102a  slt         $v0, $s1, $t3
    ctx->pc = 0x194060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x194064: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x194064u;
    {
        const bool branch_taken_0x194064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194064) {
            ctx->pc = 0x194068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194064u;
            // 0x194068: 0x8e07001c  lw          $a3, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194090u;
            goto label_194090;
        }
    }
    ctx->pc = 0x19406Cu;
    // 0x19406c: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x19406cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x194070: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x194070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x194074: 0x9204000e  lbu         $a0, 0xE($s0)
    ctx->pc = 0x194074u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x194078: 0x9205000f  lbu         $a1, 0xF($s0)
    ctx->pc = 0x194078u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x19407c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x19407cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x194080: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x194080u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x194084: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x194084u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x194088: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x194088u;
    {
        const bool branch_taken_0x194088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194088u;
        // 0x19408c: 0xa3a50003  sb          $a1, 0x3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194088) {
            ctx->pc = 0x194108u;
            goto label_194108;
        }
    }
    ctx->pc = 0x194090u;
label_194090:
    // 0x194090: 0x1671023  subu        $v0, $t3, $a3
    ctx->pc = 0x194090u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x194094: 0x2224023  subu        $t0, $s1, $v0
    ctx->pc = 0x194094u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x194098: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x194098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19409c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x19409Cu;
    {
        const bool branch_taken_0x19409c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19409c) {
            ctx->pc = 0x1940A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19409Cu;
            // 0x1940a0: 0x9202000f  lbu         $v0, 0xF($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1940F8u;
            goto label_1940f8;
        }
    }
    ctx->pc = 0x1940A4u;
    // 0x1940a4: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1940A4u;
    {
        const bool branch_taken_0x1940a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1940a4) {
            ctx->pc = 0x1940A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1940A4u;
            // 0x1940a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1940ACu;
            goto label_1940ac;
        }
    }
    ctx->pc = 0x1940ACu;
label_1940ac:
    // 0x1940ac: 0x9204000d  lbu         $a0, 0xD($s0)
    ctx->pc = 0x1940acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x1940b0: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x1940b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1940b4: 0x9202000e  lbu         $v0, 0xE($s0)
    ctx->pc = 0x1940b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1940b8: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x1940b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1940bc: 0x70681818  mult1       $v1, $v1, $t0
    ctx->pc = 0x1940bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1940c0: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x1940c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1940c4: 0x9205000f  lbu         $a1, 0xF($s0)
    ctx->pc = 0x1940c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x1940c8: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x1940c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1940cc: 0x67001a  div         $zero, $v1, $a3
    ctx->pc = 0x1940ccu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1940d0: 0x7047001a  div1        $zero, $v0, $a3
    ctx->pc = 0x1940d0u;
    { int32_t divisor = GPR_S32(ctx, 7); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x1940d4: 0x1812  mflo        $v1
    ctx->pc = 0x1940d4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1940d8: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x1940d8u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1940dc: 0x70001012  mflo1       $v0
    ctx->pc = 0x1940dcu;
    SET_GPR_U64(ctx, 2, ctx->lo1);
    // 0x1940e0: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x1940e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1940e4: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x1940e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1940e8: 0x2012  mflo        $a0
    ctx->pc = 0x1940e8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1940ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1940ECu;
    {
        const bool branch_taken_0x1940ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1940F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940ECu;
        // 0x1940f0: 0xa3a40001  sb          $a0, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1940ec) {
            ctx->pc = 0x194108u;
            goto label_194108;
        }
    }
    ctx->pc = 0x1940F4u;
    // 0x1940f4: 0x0  nop
    ctx->pc = 0x1940f4u;
    // NOP
label_1940f8:
    // 0x1940f8: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x1940f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1940fc: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x1940fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x194100: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x194100u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x194104: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x194104u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_194108:
    // 0x194108: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x194108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x19410c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x19410cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x194110: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x194110u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194114: 0x93a30002  lbu         $v1, 0x2($sp)
    ctx->pc = 0x194114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x194118: 0x93a40003  lbu         $a0, 0x3($sp)
    ctx->pc = 0x194118u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x19411c: 0xa1250000  sb          $a1, 0x0($t1)
    ctx->pc = 0x19411cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x194120: 0xa1220001  sb          $v0, 0x1($t1)
    ctx->pc = 0x194120u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x194124: 0xa1230002  sb          $v1, 0x2($t1)
    ctx->pc = 0x194124u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x194128: 0xa1240003  sb          $a0, 0x3($t1)
    ctx->pc = 0x194128u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x19412c: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x19412cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x194130: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x194130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x194134: 0x541ffca  bgez        $t2, . + 4 + (-0x36 << 2)
    ctx->pc = 0x194134u;
    {
        const bool branch_taken_0x194134 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x194138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194134u;
        // 0x194138: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194134) {
            ctx->pc = 0x194060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194060;
        }
    }
    ctx->pc = 0x19413Cu;
label_19413c:
    // 0x19413c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19413cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x194140: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x194140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x194144: 0xc05fe96  jal         func_17FA58
    ctx->pc = 0x194144u;
    SET_GPR_U32(ctx, 31, 0x19414Cu);
    ctx->pc = 0x194148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194144u;
    // 0x194148: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FA58u, 0x194144u, 0x19414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19414Cu;
label_19414c:
    // 0x19414c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x19414Cu;
    SET_GPR_U32(ctx, 31, 0x194154u);
    ctx->pc = 0x194150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19414Cu;
    // 0x194150: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x19414Cu, 0x194154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194154u;
label_194154:
    // 0x194154: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x194154u;
    SET_GPR_U32(ctx, 31, 0x19415Cu);
    ctx->pc = 0x194158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194154u;
    // 0x194158: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x194154u, 0x19415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19415Cu;
label_19415c:
    // 0x19415c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x19415Cu;
    SET_GPR_U32(ctx, 31, 0x194164u);
    ctx->pc = 0x194160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19415Cu;
    // 0x194160: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x19415Cu, 0x194164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194164u;
label_194164:
    // 0x194164: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x194164u;
    SET_GPR_U32(ctx, 31, 0x19416Cu);
    ctx->pc = 0x194168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194164u;
    // 0x194168: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x194164u, 0x19416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19416Cu;
label_19416c:
    // 0x19416c: 0xae400094  sw          $zero, 0x94($s2)
    ctx->pc = 0x19416cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 0));
    // 0x194170: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x194170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
label_194174:
    // 0x194174: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x194174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194178: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x194178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19417c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19417cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194180: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x194180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x194184: 0x3e00008  jr          $ra
    ctx->pc = 0x194184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194184u;
        // 0x194188: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19418Cu;
}
