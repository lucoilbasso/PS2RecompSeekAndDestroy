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

// Function: sceDevConsOpen
// Address: 0x1ad170 - 0x1ad26c
void sceDevConsOpen_0x1ad170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsOpen_0x1ad170");
#endif

    switch (ctx->pc) {
        case 0x1ad1d4u: goto label_1ad1d4;
        case 0x1ad210u: goto label_1ad210;
        case 0x1ad240u: goto label_1ad240;
        case 0x1ad248u: goto label_1ad248;
        default: break;
    }

    ctx->pc = 0x1ad170u;

    // 0x1ad170: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ad170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ad174: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ad174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ad178: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ad178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1ad17c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ad17cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad180: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1ad180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1ad184: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ad184u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad188: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ad188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ad18c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ad18cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad190: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ad190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ad194: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1ad194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad198: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ad198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ad19c: 0x2e420051  sltiu       $v0, $s2, 0x51
    ctx->pc = 0x1ad19cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
    // 0x1ad1a0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1AD1A0u;
    {
        const bool branch_taken_0x1ad1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1A0u;
        // 0x1ad1a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1a0) {
            ctx->pc = 0x1AD218u;
            goto label_1ad218;
        }
    }
    ctx->pc = 0x1AD1A8u;
    // 0x1ad1a8: 0x2e220041  sltiu       $v0, $s1, 0x41
    ctx->pc = 0x1ad1a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x1ad1ac: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1AD1ACu;
    {
        const bool branch_taken_0x1ad1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1ACu;
        // 0x1ad1b0: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1ac) {
            ctx->pc = 0x1AD218u;
            goto label_1ad218;
        }
    }
    ctx->pc = 0x1AD1B4u;
    // 0x1ad1b4: 0x24e37c58  addiu       $v1, $a3, 0x7C58
    ctx->pc = 0x1ad1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 31832));
    // 0x1ad1b8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1ad1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ad1bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD1BCu;
    {
        const bool branch_taken_0x1ad1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1BCu;
        // 0x1ad1c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1bc) {
            ctx->pc = 0x1AD1D0u;
            goto label_1ad1d0;
        }
    }
    ctx->pc = 0x1AD1C4u;
    // 0x1ad1c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AD1C4u;
    {
        const bool branch_taken_0x1ad1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1C4u;
        // 0x1ad1c8: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1c4) {
            ctx->pc = 0x1AD1FCu;
            goto label_1ad1fc;
        }
    }
    ctx->pc = 0x1AD1CCu;
    // 0x1ad1cc: 0x0  nop
    ctx->pc = 0x1ad1ccu;
    // NOP
label_1ad1d0:
    // 0x1ad1d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ad1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ad1d4:
    // 0x1ad1d4: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x1ad1d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ad1d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD1D8u;
    {
        const bool branch_taken_0x1ad1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1D8u;
        // 0x1ad1dc: 0x24030058  addiu       $v1, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1d8) {
            ctx->pc = 0x1AD1FCu;
            goto label_1ad1fc;
        }
    }
    ctx->pc = 0x1AD1E0u;
    // 0x1ad1e0: 0x24e67c58  addiu       $a2, $a3, 0x7C58
    ctx->pc = 0x1ad1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 31832));
    // 0x1ad1e4: 0xa32018  mult        $a0, $a1, $v1
    ctx->pc = 0x1ad1e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ad1e8: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x1ad1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1ad1ec: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ad1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ad1f0: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1AD1F0u;
    {
        const bool branch_taken_0x1ad1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad1f0) {
            ctx->pc = 0x1AD1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD1F0u;
            // 0x1ad1f4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD1D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad1d4;
        }
    }
    ctx->pc = 0x1AD1F8u;
    // 0x1ad1f8: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x1ad1f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1ad1fc:
    // 0x1ad1fc: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AD1FCu;
    {
        const bool branch_taken_0x1ad1fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1FCu;
        // 0x1ad200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1fc) {
            ctx->pc = 0x1AD24Cu;
            goto label_1ad24c;
        }
    }
    ctx->pc = 0x1AD204u;
    // 0x1ad204: 0x2512018  mult        $a0, $s2, $s1
    ctx->pc = 0x1ad204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ad208: 0xc06b94e  jal         func_1AE538
    ctx->pc = 0x1AD208u;
    SET_GPR_U32(ctx, 31, 0x1AD210u);
    ctx->pc = 0x1AD20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD208u;
    // 0x1ad20c: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE538u, 0x1AD208u, 0x1AD210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD210u;
label_1ad210:
    // 0x1ad210: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD210u;
    {
        const bool branch_taken_0x1ad210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD210u;
        // 0x1ad214: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad210) {
            ctx->pc = 0x1AD220u;
            goto label_1ad220;
        }
    }
    ctx->pc = 0x1AD218u;
label_1ad218:
    // 0x1ad218: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1AD218u;
    {
        const bool branch_taken_0x1ad218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD218u;
        // 0x1ad21c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad218) {
            ctx->pc = 0x1AD24Cu;
            goto label_1ad24c;
        }
    }
    ctx->pc = 0x1AD220u;
label_1ad220:
    // 0x1ad220: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ad220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ad224: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1ad224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x1ad228: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1ad228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x1ad22c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ad22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad230: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x1ad230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ad234: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ad234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad238: 0xc06b40e  jal         func_1AD038
    ctx->pc = 0x1AD238u;
    SET_GPR_U32(ctx, 31, 0x1AD240u);
    ctx->pc = 0x1AD23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD238u;
    // 0x1ad23c: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD038u, 0x1AD238u, 0x1AD240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD240u;
label_1ad240:
    // 0x1ad240: 0xc06b5b0  jal         func_1AD6C0
    ctx->pc = 0x1AD240u;
    SET_GPR_U32(ctx, 31, 0x1AD248u);
    ctx->pc = 0x1AD244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD240u;
    // 0x1ad244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD6C0u, 0x1AD240u, 0x1AD248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD248u;
label_1ad248:
    // 0x1ad248: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ad248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad24c:
    // 0x1ad24c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ad24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ad250: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ad250u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad254: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ad254u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad258: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ad258u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad25c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ad25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad264: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD264u;
        // 0x1ad268: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD26Cu;
}
