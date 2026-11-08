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

// Function: WMCardStatus__FP7WcMCardP17MCARD_INFORMATION
// Address: 0x179208 - 0x17935c
void WMCardStatus__FP7WcMCardP17MCARD_INFORMATION_0x179208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardStatus__FP7WcMCardP17MCARD_INFORMATION_0x179208");
#endif

    switch (ctx->pc) {
        case 0x179228u: goto label_179228;
        case 0x17923cu: goto label_17923c;
        case 0x179258u: goto label_179258;
        default: break;
    }

    ctx->pc = 0x179208u;

    // 0x179208: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x179208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17920c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17920cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x179210: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x179210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x179214: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x179214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x179218: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x179218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17921c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17921cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x179220: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x179220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179224: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x179224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_179228:
    // 0x179228: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x179228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x17922c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x17922cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x179230: 0x2607001c  addiu       $a3, $s0, 0x1C
    ctx->pc = 0x179230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x179234: 0xc071654  jal         func_1C5950
    ctx->pc = 0x179234u;
    SET_GPR_U32(ctx, 31, 0x17923Cu);
    ctx->pc = 0x179238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179234u;
    // 0x179238: 0x26080020  addiu       $t0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5950u, 0x179234u, 0x17923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17923Cu;
label_17923c:
    // 0x17923c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17923Cu;
    {
        const bool branch_taken_0x17923c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17923c) {
            ctx->pc = 0x179240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17923Cu;
            // 0x179240: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179228;
        }
    }
    ctx->pc = 0x179244u;
    // 0x179244: 0x26514030  addiu       $s1, $s2, 0x4030
    ctx->pc = 0x179244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16432));
    // 0x179248: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17924c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17924cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179250: 0xc071606  jal         func_1C5818
    ctx->pc = 0x179250u;
    SET_GPR_U32(ctx, 31, 0x179258u);
    ctx->pc = 0x179254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179250u;
    // 0x179254: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x179250u, 0x179258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179258u;
label_179258:
    // 0x179258: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x179258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17925c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17925Cu;
    {
        const bool branch_taken_0x17925c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17925c) {
            ctx->pc = 0x179260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17925Cu;
            // 0x179260: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179270u;
            goto label_179270;
        }
    }
    ctx->pc = 0x179264u;
    // 0x179264: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x179264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x179268: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x179268u;
    {
        const bool branch_taken_0x179268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179268u;
        // 0x17926c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179268) {
            ctx->pc = 0x179348u;
            goto label_179348;
        }
    }
    ctx->pc = 0x179270u;
label_179270:
    // 0x179270: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x179270u;
    {
        const bool branch_taken_0x179270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179270) {
            ctx->pc = 0x1792A0u;
            goto label_1792a0;
        }
    }
    ctx->pc = 0x179278u;
    // 0x179278: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x179278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17927c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17927Cu;
    {
        const bool branch_taken_0x17927c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17927c) {
            ctx->pc = 0x1792A0u;
            goto label_1792a0;
        }
    }
    ctx->pc = 0x179284u;
    // 0x179284: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x179284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x179288: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x179288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17928c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17928cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x179290: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x179290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x179294: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x179294u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x179298: 0x5460002b  bnel        $v1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x179298u;
    {
        const bool branch_taken_0x179298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x179298) {
            ctx->pc = 0x17929Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179298u;
            // 0x17929c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179348u;
            goto label_179348;
        }
    }
    ctx->pc = 0x1792A0u;
label_1792a0:
    // 0x1792a0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1792a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1792a4: 0x8e434030  lw          $v1, 0x4030($s2)
    ctx->pc = 0x1792a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16432)));
    // 0x1792a8: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1792A8u;
    {
        const bool branch_taken_0x1792a8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1792ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792A8u;
        // 0x1792ac: 0x2862fffe  slti        $v0, $v1, -0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967294) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792a8) {
            ctx->pc = 0x1792D0u;
            goto label_1792d0;
        }
    }
    ctx->pc = 0x1792B0u;
    // 0x1792b0: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1792B0u;
    {
        const bool branch_taken_0x1792b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1792b0) {
            ctx->pc = 0x1792B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1792B0u;
            // 0x1792b4: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179310u;
            goto label_179310;
        }
    }
    ctx->pc = 0x1792B8u;
    // 0x1792b8: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1792b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1792bc: 0x50620020  beql        $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1792BCu;
    {
        const bool branch_taken_0x1792bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1792bc) {
            ctx->pc = 0x1792C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1792BCu;
            // 0x1792c0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179340u;
            goto label_179340;
        }
    }
    ctx->pc = 0x1792C4u;
    // 0x1792c4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1792C4u;
    {
        const bool branch_taken_0x1792c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1792C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792C4u;
        // 0x1792c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792c4) {
            ctx->pc = 0x179340u;
            goto label_179340;
        }
    }
    ctx->pc = 0x1792CCu;
    // 0x1792cc: 0x0  nop
    ctx->pc = 0x1792ccu;
    // NOP
label_1792d0:
    // 0x1792d0: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1792D0u;
    {
        const bool branch_taken_0x1792d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1792D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792D0u;
        // 0x1792d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792d0) {
            ctx->pc = 0x179340u;
            goto label_179340;
        }
    }
    ctx->pc = 0x1792D8u;
    // 0x1792d8: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1792d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1792dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1792dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1792e0: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1792E0u;
    {
        const bool branch_taken_0x1792e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1792E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792E0u;
        // 0x1792e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792e0) {
            ctx->pc = 0x179324u;
            goto label_179324;
        }
    }
    ctx->pc = 0x1792E8u;
    // 0x1792e8: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1792E8u;
    {
        const bool branch_taken_0x1792e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1792e8) {
            ctx->pc = 0x179324u;
            goto label_179324;
        }
    }
    ctx->pc = 0x1792F0u;
    // 0x1792f0: 0x8e434040  lw          $v1, 0x4040($s2)
    ctx->pc = 0x1792f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16448)));
    // 0x1792f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1792f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1792f8: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1792F8u;
    {
        const bool branch_taken_0x1792f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1792f8) {
            ctx->pc = 0x1792FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1792F8u;
            // 0x1792fc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179348u;
            goto label_179348;
        }
    }
    ctx->pc = 0x179300u;
    // 0x179300: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x179300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x179304: 0xae424040  sw          $v0, 0x4040($s2)
    ctx->pc = 0x179304u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16448), GPR_U32(ctx, 2));
    // 0x179308: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x179308u;
    {
        const bool branch_taken_0x179308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179308u;
        // 0x17930c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179308) {
            ctx->pc = 0x179348u;
            goto label_179348;
        }
    }
    ctx->pc = 0x179310u;
label_179310:
    // 0x179310: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x179310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x179314: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x179314u;
    {
        const bool branch_taken_0x179314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x179314) {
            ctx->pc = 0x179318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179314u;
            // 0x179318: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179324u;
            goto label_179324;
        }
    }
    ctx->pc = 0x17931Cu;
    // 0x17931c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17931Cu;
    {
        const bool branch_taken_0x17931c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17931Cu;
        // 0x179320: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17931c) {
            ctx->pc = 0x179330u;
            goto label_179330;
        }
    }
    ctx->pc = 0x179324u;
label_179324:
    // 0x179324: 0xae424040  sw          $v0, 0x4040($s2)
    ctx->pc = 0x179324u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16448), GPR_U32(ctx, 2));
    // 0x179328: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x179328u;
    {
        const bool branch_taken_0x179328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179328u;
        // 0x17932c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179328) {
            ctx->pc = 0x179348u;
            goto label_179348;
        }
    }
    ctx->pc = 0x179330u;
label_179330:
    // 0x179330: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x179330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x179334: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x179334u;
    {
        const bool branch_taken_0x179334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179334u;
        // 0x179338: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179334) {
            ctx->pc = 0x179348u;
            goto label_179348;
        }
    }
    ctx->pc = 0x17933Cu;
    // 0x17933c: 0x0  nop
    ctx->pc = 0x17933cu;
    // NOP
label_179340:
    // 0x179340: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x179340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x179344: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x179344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_179348:
    // 0x179348: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x179348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17934c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17934cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179350: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x179350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x179354: 0x3e00008  jr          $ra
    ctx->pc = 0x179354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179354u;
        // 0x179358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17935Cu;
}
