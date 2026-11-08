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

// Function: Cmd_cmp__FP15BsSCDEntControl
// Address: 0x1a7240 - 0x1a7388
void Cmd_cmp__FP15BsSCDEntControl_0x1a7240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_cmp__FP15BsSCDEntControl_0x1a7240");
#endif

    switch (ctx->pc) {
        case 0x1a7284u: goto label_1a7284;
        case 0x1a72c4u: goto label_1a72c4;
        case 0x1a72f8u: goto label_1a72f8;
        default: break;
    }

    ctx->pc = 0x1a7240u;

    // 0x1a7240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7244: 0x3c027ffe  lui         $v0, 0x7FFE
    ctx->pc = 0x1a7244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7248: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a724c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a724cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7250: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7254: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x1a7254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a7258: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a7258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a725c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a725cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a7260: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a7260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a7264: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a7264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7268: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a7268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a726c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a726cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a7270: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a7270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a7274: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7274u;
    {
        const bool branch_taken_0x1a7274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7274u;
        // 0x1a7278: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7274) {
            ctx->pc = 0x1A7290u;
            goto label_1a7290;
        }
    }
    ctx->pc = 0x1A727Cu;
    // 0x1a727c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A727Cu;
    SET_GPR_U32(ctx, 31, 0x1A7284u);
    ctx->pc = 0x1A7280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A727Cu;
    // 0x1a7280: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A727Cu, 0x1A7284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7284u;
label_1a7284:
    // 0x1a7284: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7284u;
    {
        const bool branch_taken_0x1a7284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7284u;
        // 0x1a7288: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7284) {
            ctx->pc = 0x1A7294u;
            goto label_1a7294;
        }
    }
    ctx->pc = 0x1A728Cu;
    // 0x1a728c: 0x0  nop
    ctx->pc = 0x1a728cu;
    // NOP
label_1a7290:
    // 0x1a7290: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a7290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a7294:
    // 0x1a7294: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a7294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a7298: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a7298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a729c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a729cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a72a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a72a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a72a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a72a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a72a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a72a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a72ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a72acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a72b0: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a72b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a72b4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A72B4u;
    {
        const bool branch_taken_0x1a72b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A72B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72B4u;
        // 0x1a72b8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72b4) {
            ctx->pc = 0x1A72CCu;
            goto label_1a72cc;
        }
    }
    ctx->pc = 0x1A72BCu;
    // 0x1a72bc: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A72BCu;
    SET_GPR_U32(ctx, 31, 0x1A72C4u);
    ctx->pc = 0x1A72C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A72BCu;
    // 0x1a72c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A72BCu, 0x1A72C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A72C4u;
label_1a72c4:
    // 0x1a72c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a72c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a72c8: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a72c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_1a72cc:
    // 0x1a72cc: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a72ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a72d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a72d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a72d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a72d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a72d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a72d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a72dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a72dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a72e0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a72e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a72e4: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a72e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a72e8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A72E8u;
    {
        const bool branch_taken_0x1a72e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A72ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72E8u;
        // 0x1a72ec: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72e8) {
            ctx->pc = 0x1A72FCu;
            goto label_1a72fc;
        }
    }
    ctx->pc = 0x1A72F0u;
    // 0x1a72f0: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A72F0u;
    SET_GPR_U32(ctx, 31, 0x1A72F8u);
    ctx->pc = 0x1A72F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A72F0u;
    // 0x1a72f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A72F0u, 0x1A72F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A72F8u;
label_1a72f8:
    // 0x1a72f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a72f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a72fc:
    // 0x1a72fc: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x1a72fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1a7300: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1a7300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a7304: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A7304u;
    {
        const bool branch_taken_0x1a7304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7304u;
        // 0x1a7308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7304) {
            ctx->pc = 0x1A7370u;
            goto label_1a7370;
        }
    }
    ctx->pc = 0x1A730Cu;
    // 0x1a730c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a730cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7310: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a7310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1a7314: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a7314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7318: 0x8c639480  lw          $v1, -0x6B80($v1)
    ctx->pc = 0x1a7318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939776)));
    // 0x1a731c: 0x600008  jr          $v1
    ctx->pc = 0x1A731Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7328u: goto label_1a7328;
            case 0x1A7338u: goto label_1a7338;
            case 0x1A7348u: goto label_1a7348;
            case 0x1A7358u: goto label_1a7358;
            case 0x1A7360u: goto label_1a7360;
            case 0x1A7368u: goto label_1a7368;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A731Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A7324u;
    // 0x1a7324: 0x0  nop
    ctx->pc = 0x1a7324u;
    // NOP
label_1a7328:
    // 0x1a7328: 0x2051026  xor         $v0, $s0, $a1
    ctx->pc = 0x1a7328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 5));
    // 0x1a732c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A732Cu;
    {
        const bool branch_taken_0x1a732c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A732Cu;
        // 0x1a7330: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a732c) {
            ctx->pc = 0x1A7370u;
            goto label_1a7370;
        }
    }
    ctx->pc = 0x1A7334u;
    // 0x1a7334: 0x0  nop
    ctx->pc = 0x1a7334u;
    // NOP
label_1a7338:
    // 0x1a7338: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x1a7338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a733c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A733Cu;
    {
        const bool branch_taken_0x1a733c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A733Cu;
        // 0x1a7340: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a733c) {
            ctx->pc = 0x1A7370u;
            goto label_1a7370;
        }
    }
    ctx->pc = 0x1A7344u;
    // 0x1a7344: 0x0  nop
    ctx->pc = 0x1a7344u;
    // NOP
label_1a7348:
    // 0x1a7348: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1a7348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1a734c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A734Cu;
    {
        const bool branch_taken_0x1a734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A734Cu;
        // 0x1a7350: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a734c) {
            ctx->pc = 0x1A7370u;
            goto label_1a7370;
        }
    }
    ctx->pc = 0x1A7354u;
    // 0x1a7354: 0x0  nop
    ctx->pc = 0x1a7354u;
    // NOP
label_1a7358:
    // 0x1a7358: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7358u;
    {
        const bool branch_taken_0x1a7358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7358u;
        // 0x1a735c: 0xb0102a  slt         $v0, $a1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7358) {
            ctx->pc = 0x1A7370u;
            goto label_1a7370;
        }
    }
    ctx->pc = 0x1A7360u;
label_1a7360:
    // 0x1a7360: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7360u;
    {
        const bool branch_taken_0x1a7360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7360u;
        // 0x1a7364: 0x205102a  slt         $v0, $s0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7360) {
            ctx->pc = 0x1A7370u;
            goto label_1a7370;
        }
    }
    ctx->pc = 0x1A7368u;
label_1a7368:
    // 0x1a7368: 0x2051026  xor         $v0, $s0, $a1
    ctx->pc = 0x1a7368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 5));
    // 0x1a736c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a736cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a7370:
    // 0x1a7370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7374: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7378: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a7378u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a737c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a737cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7380: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7380u;
        // 0x1a7384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7388u;
}
