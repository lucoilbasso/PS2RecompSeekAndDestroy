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

// Function: entry_00173198
// Address: 0x173198 - 0x173288
void entry_00173198_0x173198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173198_0x173198");
#endif

    switch (ctx->pc) {
        case 0x1731a0u: goto label_1731a0;
        case 0x1731b8u: goto label_1731b8;
        case 0x1731d0u: goto label_1731d0;
        case 0x1731dcu: goto label_1731dc;
        case 0x1731f0u: goto label_1731f0;
        case 0x173200u: goto label_173200;
        case 0x17320cu: goto label_17320c;
        case 0x17321cu: goto label_17321c;
        case 0x173268u: goto label_173268;
        default: break;
    }

    ctx->pc = 0x173198u;

    // 0x173198: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x173198u;
    SET_GPR_U32(ctx, 31, 0x1731A0u);
    ctx->pc = 0x17319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173198u;
    // 0x17319c: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x173198u, 0x1731A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731A0u;
label_1731a0:
    // 0x1731a0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1731a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1731a4: 0x3c026402  lui         $v0, 0x6402
    ctx->pc = 0x1731a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25602 << 16));
    // 0x1731a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1731a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1731acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1731b0: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x1731B0u;
    SET_GPR_U32(ctx, 31, 0x1731B8u);
    ctx->pc = 0x1731B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731B0u;
    // 0x1731b4: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x1731B0u, 0x1731B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731B8u;
label_1731b8:
    // 0x1731b8: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x1731b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1731bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1731bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1731c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1731c4: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1731c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1731c8: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x1731C8u;
    SET_GPR_U32(ctx, 31, 0x1731D0u);
    ctx->pc = 0x1731CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731C8u;
    // 0x1731cc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x1731C8u, 0x1731D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731D0u;
label_1731d0:
    // 0x1731d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1731d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731d4: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x1731D4u;
    SET_GPR_U32(ctx, 31, 0x1731DCu);
    ctx->pc = 0x1731D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731D4u;
    // 0x1731d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x1731D4u, 0x1731DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731DCu;
label_1731dc:
    // 0x1731dc: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x1731dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1731e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1731e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731e4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1731e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1731e8: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x1731E8u;
    SET_GPR_U32(ctx, 31, 0x1731F0u);
    ctx->pc = 0x1731ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731E8u;
    // 0x1731ec: 0xc22823  subu        $a1, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x1731E8u, 0x1731F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731F0u;
label_1731f0:
    // 0x1731f0: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x1731f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1731f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1731f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731f8: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x1731F8u;
    SET_GPR_U32(ctx, 31, 0x173200u);
    ctx->pc = 0x1731FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731F8u;
    // 0x1731fc: 0x712823  subu        $a1, $v1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x1731F8u, 0x173200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173200u;
label_173200:
    // 0x173200: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x173200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x173204: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x173204u;
    SET_GPR_U32(ctx, 31, 0x17320Cu);
    ctx->pc = 0x173208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173204u;
    // 0x173208: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x173204u, 0x17320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17320Cu;
label_17320c:
    // 0x17320c: 0x3c05bcbc  lui         $a1, 0xBCBC
    ctx->pc = 0x17320cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48316 << 16));
    // 0x173210: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173214: 0xc06bbdc  jal         func_1AEF70
    ctx->pc = 0x173214u;
    SET_GPR_U32(ctx, 31, 0x17321Cu);
    ctx->pc = 0x173218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173214u;
    // 0x173218: 0x34a5bcbc  ori         $a1, $a1, 0xBCBC (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48316);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF70u, 0x173214u, 0x17321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17321Cu;
label_17321c:
    // 0x17321c: 0x1619c0  sll         $v1, $s6, 7
    ctx->pc = 0x17321cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 7));
    // 0x173220: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x173220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x173224: 0x2402008f  addiu       $v0, $zero, 0x8F
    ctx->pc = 0x173224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x173228: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x173228u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17322c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x17322cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x173230: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x173230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x173234: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x173234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173238: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x173238u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x17323c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x17323cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x173240: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x173240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x173244: 0x25080083  addiu       $t0, $t0, 0x83
    ctx->pc = 0x173244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 131));
    // 0x173248: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x173248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x17324c: 0x484025  or          $t0, $v0, $t0
    ctx->pc = 0x17324cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x173250: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x173250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x173254: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173258: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x173258u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x17325c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17325cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173260: 0xc06bb06  jal         func_1AEC18
    ctx->pc = 0x173260u;
    SET_GPR_U32(ctx, 31, 0x173268u);
    ctx->pc = 0x173264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173260u;
    // 0x173264: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEC18u, 0x173260u, 0x173268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173268u;
label_173268:
    // 0x173268: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x173268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17326c: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x17326cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x173270: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x173270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x173274: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x173274u;
    {
        const bool branch_taken_0x173274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173274) {
            ctx->pc = 0x173278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173274u;
            // 0x173278: 0x2405fff9  addiu       $a1, $zero, -0x7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173288u;
            return;
        }
    }
    ctx->pc = 0x17327Cu;
    // 0x17327c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x17327cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x173280: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x173280u;
    {
        const bool branch_taken_0x173280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173280u;
        // 0x173284: 0x8fb100a8  lw          $s1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173280) {
            ctx->pc = 0x173290u;
            return;
        }
    }
    ctx->pc = 0x173288u;
}
