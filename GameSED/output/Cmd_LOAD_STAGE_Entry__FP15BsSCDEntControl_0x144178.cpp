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

// Function: Cmd_LOAD_STAGE_Entry__FP15BsSCDEntControl
// Address: 0x144178 - 0x144318
void Cmd_LOAD_STAGE_Entry__FP15BsSCDEntControl_0x144178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_STAGE_Entry__FP15BsSCDEntControl_0x144178");
#endif

    switch (ctx->pc) {
        case 0x1441bcu: goto label_1441bc;
        case 0x1441e0u: goto label_1441e0;
        case 0x1441f4u: goto label_1441f4;
        case 0x14420cu: goto label_14420c;
        case 0x144218u: goto label_144218;
        case 0x144238u: goto label_144238;
        case 0x144248u: goto label_144248;
        case 0x144260u: goto label_144260;
        case 0x144268u: goto label_144268;
        case 0x144278u: goto label_144278;
        case 0x144280u: goto label_144280;
        case 0x144298u: goto label_144298;
        default: break;
    }

    ctx->pc = 0x144178u;

    // 0x144178: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x144178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14417c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x14417cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x144180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x144180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144184: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x144184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x144188: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x144188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14418c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x14418cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x144190: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x144190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x144194: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x144194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x144198: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x144198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x14419c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x14419cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1441a0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1441a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1441a4: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x1441a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1441a8: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1441A8u;
    {
        const bool branch_taken_0x1441a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1441ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441A8u;
        // 0x1441ac: 0x8c530048  lw          $s3, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441a8) {
            ctx->pc = 0x144240u;
            goto label_144240;
        }
    }
    ctx->pc = 0x1441B0u;
    // 0x1441b0: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1441b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1441b4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1441B4u;
    SET_GPR_U32(ctx, 31, 0x1441BCu);
    ctx->pc = 0x1441B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1441B4u;
    // 0x1441b8: 0x8c52037c  lw          $s2, 0x37C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 892)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1441B4u, 0x1441BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1441BCu;
label_1441bc:
    // 0x1441bc: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1441bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1441c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1441c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1441c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1441c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1441c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1441c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1441cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1441ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1441d0: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1441D0u;
    {
        const bool branch_taken_0x1441d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1441D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441D0u;
        // 0x1441d4: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441d0) {
            ctx->pc = 0x1441E4u;
            goto label_1441e4;
        }
    }
    ctx->pc = 0x1441D8u;
    // 0x1441d8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1441D8u;
    SET_GPR_U32(ctx, 31, 0x1441E0u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1441D8u, 0x1441E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1441E0u;
label_1441e0:
    // 0x1441e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1441e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1441e4:
    // 0x1441e4: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1441E4u;
    {
        const bool branch_taken_0x1441e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1441e4) {
            ctx->pc = 0x144210u;
            goto label_144210;
        }
    }
    ctx->pc = 0x1441ECu;
    // 0x1441ec: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x1441ECu;
    SET_GPR_U32(ctx, 31, 0x1441F4u);
    ctx->pc = 0x1441F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1441ECu;
    // 0x1441f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x1441ECu, 0x1441F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1441F4u;
label_1441f4:
    // 0x1441f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1441f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1441f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1441f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1441fc: 0x142900  sll         $a1, $s4, 4
    ctx->pc = 0x1441fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x144200: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x144200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144204: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x144204u;
    SET_GPR_U32(ctx, 31, 0x14420Cu);
    ctx->pc = 0x144208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144204u;
    // 0x144208: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x144204u, 0x14420Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14420Cu;
label_14420c:
    // 0x14420c: 0xae70005c  sw          $s0, 0x5C($s3)
    ctx->pc = 0x14420cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 16));
label_144210:
    // 0x144210: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x144210u;
    SET_GPR_U32(ctx, 31, 0x144218u);
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x144210u, 0x144218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144218u;
label_144218:
    // 0x144218: 0x142900  sll         $a1, $s4, 4
    ctx->pc = 0x144218u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x14421c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14421cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144220: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x144220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x144224: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x144224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144228: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x144228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x14422c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14422cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144230: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x144230u;
    SET_GPR_U32(ctx, 31, 0x144238u);
    ctx->pc = 0x144234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144230u;
    // 0x144234: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x144230u, 0x144238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144238u;
label_144238:
    // 0x144238: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x144238u;
    {
        const bool branch_taken_0x144238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144238u;
        // 0x14423c: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144238) {
            ctx->pc = 0x14429Cu;
            goto label_14429c;
        }
    }
    ctx->pc = 0x144240u;
label_144240:
    // 0x144240: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144240u;
    SET_GPR_U32(ctx, 31, 0x144248u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144240u, 0x144248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144248u;
label_144248:
    // 0x144248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14424c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14424cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144250: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x144250u;
    {
        const bool branch_taken_0x144250 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x144254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144250u;
        // 0x144254: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144250) {
            ctx->pc = 0x144270u;
            goto label_144270;
        }
    }
    ctx->pc = 0x144258u;
    // 0x144258: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x144258u;
    SET_GPR_U32(ctx, 31, 0x144260u);
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x144258u, 0x144260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144260u;
label_144260:
    // 0x144260: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x144260u;
    SET_GPR_U32(ctx, 31, 0x144268u);
    ctx->pc = 0x144264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144260u;
    // 0x144264: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x144260u, 0x144268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144268u;
label_144268:
    // 0x144268: 0xae62005c  sw          $v0, 0x5C($s3)
    ctx->pc = 0x144268u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 2));
    // 0x14426c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14426cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_144270:
    // 0x144270: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x144270u;
    SET_GPR_U32(ctx, 31, 0x144278u);
    ctx->pc = 0x144274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144270u;
    // 0x144274: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x144270u, 0x144278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144278u;
label_144278:
    // 0x144278: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x144278u;
    SET_GPR_U32(ctx, 31, 0x144280u);
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x144278u, 0x144280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144280u;
label_144280:
    // 0x144280: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x144280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144284: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x144284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14428c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14428cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144290: 0xc05f40e  jal         func_17D038
    ctx->pc = 0x144290u;
    SET_GPR_U32(ctx, 31, 0x144298u);
    ctx->pc = 0x144294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144290u;
    // 0x144294: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D038u, 0x144290u, 0x144298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144298u;
label_144298:
    // 0x144298: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x144298u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_14429c:
    // 0x14429c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x14429cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1442a0: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1442a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1442a4: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1442a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1442a8: 0x24422680  addiu       $v0, $v0, 0x2680
    ctx->pc = 0x1442a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9856));
    // 0x1442ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1442acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1442b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1442b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1442b4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1442b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1442b8: 0x246600a0  addiu       $a2, $v1, 0xA0
    ctx->pc = 0x1442b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x1442bc: 0xac900044  sw          $s0, 0x44($a0)
    ctx->pc = 0x1442bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 16));
    // 0x1442c0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1442c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1442c4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1442c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1442c8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1442c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1442cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1442ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1442d0: 0x88850003  lwl         $a1, 0x3($a0)
    ctx->pc = 0x1442d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x1442d4: 0x98850000  lwr         $a1, 0x0($a0)
    ctx->pc = 0x1442d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x1442d8: 0xa86500a7  swl         $a1, 0xA7($v1)
    ctx->pc = 0x1442d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 167); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1442dc: 0xb86500a4  swr         $a1, 0xA4($v1)
    ctx->pc = 0x1442dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 164); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1442e0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1442e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1442e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1442e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1442e8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1442e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1442ec: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1442ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1442f0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1442f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1442f4: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1442f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1442f8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1442f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1442fc: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1442fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x144300: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x144300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x144304: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x144304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x144308: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x144308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x14430c: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x14430cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x144310: 0x3e00008  jr          $ra
    ctx->pc = 0x144310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144310u;
        // 0x144314: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144318u;
}
