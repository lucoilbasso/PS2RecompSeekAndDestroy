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

// Function: Cmd_ACTOR_STATUS_Entry__FP15BsSCDEntControl
// Address: 0x1331c8 - 0x133364
void Cmd_ACTOR_STATUS_Entry__FP15BsSCDEntControl_0x1331c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_STATUS_Entry__FP15BsSCDEntControl_0x1331c8");
#endif

    switch (ctx->pc) {
        case 0x1331f4u: goto label_1331f4;
        case 0x133288u: goto label_133288;
        case 0x1332b8u: goto label_1332b8;
        case 0x1332c8u: goto label_1332c8;
        case 0x1332e0u: goto label_1332e0;
        case 0x1332ecu: goto label_1332ec;
        case 0x13334cu: goto label_13334c;
        default: break;
    }

    ctx->pc = 0x1331c8u;

    // 0x1331c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1331c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1331cc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1331ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1331d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1331d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1331d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1331d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1331d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1331d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1331dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1331dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1331e0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1331e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1331e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1331e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1331e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1331e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1331ec: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1331ECu;
    SET_GPR_U32(ctx, 31, 0x1331F4u);
    ctx->pc = 0x1331F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1331ECu;
    // 0x1331f0: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1331ECu, 0x1331F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1331F4u;
label_1331f4:
    // 0x1331f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1331f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1331f8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1331f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1331fc: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1331FCu;
    {
        const bool branch_taken_0x1331fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1331FCu;
        // 0x133200: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1331fc) {
            ctx->pc = 0x133344u;
            goto label_133344;
        }
    }
    ctx->pc = 0x133204u;
    // 0x133204: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x133204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x133208: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x133208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13320c: 0x8c636450  lw          $v1, 0x6450($v1)
    ctx->pc = 0x13320cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25680)));
    // 0x133210: 0x600008  jr          $v1
    ctx->pc = 0x133210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133218u: goto label_133218;
            case 0x133230u: goto label_133230;
            case 0x133250u: goto label_133250;
            case 0x133270u: goto label_133270;
            case 0x1332D8u: goto label_1332d8;
            case 0x133300u: goto label_133300;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133210u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x133218u;
label_133218:
    // 0x133218: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x133218u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13321c: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x13321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x133220: 0x14620048  bne         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x133220u;
    {
        const bool branch_taken_0x133220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x133220) {
            ctx->pc = 0x133344u;
            goto label_133344;
        }
    }
    ctx->pc = 0x133228u;
    // 0x133228: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x133228u;
    {
        const bool branch_taken_0x133228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133228u;
        // 0x13322c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133228) {
            ctx->pc = 0x133344u;
            goto label_133344;
        }
    }
    ctx->pc = 0x133230u;
label_133230:
    // 0x133230: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x133230u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133234: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x133234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x133238: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x133238u;
    {
        const bool branch_taken_0x133238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x133238) {
            ctx->pc = 0x133344u;
            goto label_133344;
        }
    }
    ctx->pc = 0x133240u;
    // 0x133240: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x133240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x133244: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x133244u;
    {
        const bool branch_taken_0x133244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133244u;
        // 0x133248: 0x30421000  andi        $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x133244) {
            ctx->pc = 0x1332C8u;
            goto label_1332c8;
        }
    }
    ctx->pc = 0x13324Cu;
    // 0x13324c: 0x0  nop
    ctx->pc = 0x13324cu;
    // NOP
label_133250:
    // 0x133250: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x133250u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133254: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x133254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x133258: 0x5462003a  bnel        $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x133258u;
    {
        const bool branch_taken_0x133258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x133258) {
            ctx->pc = 0x13325Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133258u;
            // 0x13325c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133344u;
            goto label_133344;
        }
    }
    ctx->pc = 0x133260u;
    // 0x133260: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x133260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x133264: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x133264u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x133268: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x133268u;
    {
        const bool branch_taken_0x133268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133268u;
        // 0x13326c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x133268) {
            ctx->pc = 0x1332C8u;
            goto label_1332c8;
        }
    }
    ctx->pc = 0x133270u;
label_133270:
    // 0x133270: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x133270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133274: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x133274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x133278: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x133278u;
    {
        const bool branch_taken_0x133278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x133278) {
            ctx->pc = 0x133344u;
            goto label_133344;
        }
    }
    ctx->pc = 0x133280u;
    // 0x133280: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x133280u;
    SET_GPR_U32(ctx, 31, 0x133288u);
    ctx->pc = 0x133284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133280u;
    // 0x133284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133280u, 0x133288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133288u;
label_133288:
    // 0x133288: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x133288u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13328c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x133290: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x133290u;
    {
        const bool branch_taken_0x133290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x133290) {
            ctx->pc = 0x133294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133290u;
            // 0x133294: 0x8e02075c  lw          $v0, 0x75C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1884)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1332C8u;
            goto label_1332c8;
        }
    }
    ctx->pc = 0x133298u;
    // 0x133298: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x133298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13329c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13329Cu;
    {
        const bool branch_taken_0x13329c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1332A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13329Cu;
        // 0x1332a0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13329c) {
            ctx->pc = 0x1332B8u;
            goto label_1332b8;
        }
    }
    ctx->pc = 0x1332A4u;
    // 0x1332a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1332a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1332a8: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1332A8u;
    {
        const bool branch_taken_0x1332a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1332a8) {
            ctx->pc = 0x1332ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1332A8u;
            // 0x1332ac: 0x8e02071c  lw          $v0, 0x71C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1332C8u;
            goto label_1332c8;
        }
    }
    ctx->pc = 0x1332B0u;
    // 0x1332b0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1332B0u;
    {
        const bool branch_taken_0x1332b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1332b0) {
            ctx->pc = 0x133344u;
            goto label_133344;
        }
    }
    ctx->pc = 0x1332B8u;
label_1332b8:
    // 0x1332b8: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1332B8u;
    {
        const bool branch_taken_0x1332b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1332b8) {
            ctx->pc = 0x1332BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1332B8u;
            // 0x1332bc: 0x8e02079c  lw          $v0, 0x79C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1948)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1332C8u;
            goto label_1332c8;
        }
    }
    ctx->pc = 0x1332C0u;
    // 0x1332c0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1332C0u;
    {
        const bool branch_taken_0x1332c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1332c0) {
            ctx->pc = 0x133344u;
            goto label_133344;
        }
    }
    ctx->pc = 0x1332C8u;
label_1332c8:
    // 0x1332c8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1332C8u;
    {
        const bool branch_taken_0x1332c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1332c8) {
            ctx->pc = 0x133344u;
            goto label_133344;
        }
    }
    ctx->pc = 0x1332D0u;
    // 0x1332d0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1332D0u;
    {
        const bool branch_taken_0x1332d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1332D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1332D0u;
        // 0x1332d4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1332d0) {
            ctx->pc = 0x133344u;
            goto label_133344;
        }
    }
    ctx->pc = 0x1332D8u;
label_1332d8:
    // 0x1332d8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1332D8u;
    SET_GPR_U32(ctx, 31, 0x1332E0u);
    ctx->pc = 0x1332DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1332D8u;
    // 0x1332dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1332D8u, 0x1332E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1332E0u;
label_1332e0:
    // 0x1332e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1332e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1332e4: 0xc04ca86  jal         func_132A18
    ctx->pc = 0x1332E4u;
    SET_GPR_U32(ctx, 31, 0x1332ECu);
    ctx->pc = 0x1332E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1332E4u;
    // 0x1332e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132A18u, 0x1332E4u, 0x1332ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1332ECu;
label_1332ec:
    // 0x1332ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1332ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1332f0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1332F0u;
    {
        const bool branch_taken_0x1332f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1332f0) {
            ctx->pc = 0x133344u;
            goto label_133344;
        }
    }
    ctx->pc = 0x1332F8u;
    // 0x1332f8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1332F8u;
    {
        const bool branch_taken_0x1332f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1332FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1332F8u;
        // 0x1332fc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1332f8) {
            ctx->pc = 0x133344u;
            goto label_133344;
        }
    }
    ctx->pc = 0x133300u;
label_133300:
    // 0x133300: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x133300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133304: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x133304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x133308: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x133308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13330c: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13330Cu;
    {
        const bool branch_taken_0x13330c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13330c) {
            ctx->pc = 0x133344u;
            goto label_133344;
        }
    }
    ctx->pc = 0x133314u;
    // 0x133314: 0x8e050230  lw          $a1, 0x230($s0)
    ctx->pc = 0x133314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x133318: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x133318u;
    {
        const bool branch_taken_0x133318 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x13331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133318u;
        // 0x13331c: 0x24022118  addiu       $v0, $zero, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133318) {
            ctx->pc = 0x133344u;
            goto label_133344;
        }
    }
    ctx->pc = 0x133320u;
    // 0x133320: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x133320u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x133324: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x133324u;
    {
        const bool branch_taken_0x133324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x133324) {
            ctx->pc = 0x133344u;
            goto label_133344;
        }
    }
    ctx->pc = 0x13332Cu;
    // 0x13332c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x13332cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x133330: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133330u;
    {
        const bool branch_taken_0x133330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133330u;
        // 0x133334: 0x8ca30260  lw          $v1, 0x260($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133330) {
            ctx->pc = 0x133344u;
            goto label_133344;
        }
    }
    ctx->pc = 0x133338u;
    // 0x133338: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x133338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x13333c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133340: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x133340u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_133344:
    // 0x133344: 0xc04171a  jal         func_105C68
    ctx->pc = 0x133344u;
    SET_GPR_U32(ctx, 31, 0x13334Cu);
    ctx->pc = 0x133348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133344u;
    // 0x133348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x133344u, 0x13334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13334Cu;
label_13334c:
    // 0x13334c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13334cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133350: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x133350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133354: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x133354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133358: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x133358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13335c: 0x3e00008  jr          $ra
    ctx->pc = 0x13335Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13335Cu;
        // 0x133360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13335Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133364u;
}
