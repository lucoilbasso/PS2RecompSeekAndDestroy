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

// Function: PartsLoadInfoSetData__9ApcObjRsciiP7WcModelP7WcImage
// Address: 0x102c18 - 0x102d88
void PartsLoadInfoSetData__9ApcObjRsciiP7WcModelP7WcImage_0x102c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartsLoadInfoSetData__9ApcObjRsciiP7WcModelP7WcImage_0x102c18");
#endif

    switch (ctx->pc) {
        case 0x102c70u: goto label_102c70;
        case 0x102ca0u: goto label_102ca0;
        default: break;
    }

    ctx->pc = 0x102c18u;

    // 0x102c18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x102c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x102c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102c20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x102c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x102c28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x102c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x102c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x102c30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x102c30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x102c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x102c38: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x102c38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c3c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x102c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x102c40: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x102c40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c44: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x102c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x102c48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x102c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x102c4c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x102c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x102c50: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x102C50u;
    {
        const bool branch_taken_0x102c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C50u;
        // 0x102c54: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c50) {
            ctx->pc = 0x102C70u;
            goto label_102c70;
        }
    }
    ctx->pc = 0x102C58u;
    // 0x102c58: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x102c5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c60: 0x24a51b88  addiu       $a1, $a1, 0x1B88
    ctx->pc = 0x102c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7048));
    // 0x102c64: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x102c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x102c68: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102C68u;
    SET_GPR_U32(ctx, 31, 0x102C70u);
    ctx->pc = 0x102C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102C68u;
    // 0x102c6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102C68u, 0x102C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102C70u;
label_102c70:
    // 0x102c70: 0x6430025  bgezl       $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x102C70u;
    {
        const bool branch_taken_0x102c70 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x102c70) {
            ctx->pc = 0x102C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102C70u;
            // 0x102c74: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102D08u;
            goto label_102d08;
        }
    }
    ctx->pc = 0x102C78u;
    // 0x102c78: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x102c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x102c7c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x102c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x102c80: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x102C80u;
    {
        const bool branch_taken_0x102c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C80u;
        // 0x102c84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c80) {
            ctx->pc = 0x102CC8u;
            goto label_102cc8;
        }
    }
    ctx->pc = 0x102C88u;
    // 0x102c88: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x102c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x102c8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x102c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102c90: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x102C90u;
    {
        const bool branch_taken_0x102c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102c90) {
            ctx->pc = 0x102C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102C90u;
            // 0x102c94: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102CA0u;
            goto label_102ca0;
        }
    }
    ctx->pc = 0x102C98u;
    // 0x102c98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x102C98u;
    {
        const bool branch_taken_0x102c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C98u;
        // 0x102c9c: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c98) {
            ctx->pc = 0x102CC8u;
            goto label_102cc8;
        }
    }
    ctx->pc = 0x102CA0u;
label_102ca0:
    // 0x102ca0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x102ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x102ca4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x102ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x102ca8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x102CA8u;
    {
        const bool branch_taken_0x102ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CA8u;
        // 0x102cac: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ca8) {
            ctx->pc = 0x102CC8u;
            goto label_102cc8;
        }
    }
    ctx->pc = 0x102CB0u;
    // 0x102cb0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x102cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x102cb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102cb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x102cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102cbc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x102CBCu;
    {
        const bool branch_taken_0x102cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x102cbc) {
            ctx->pc = 0x102CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102CBCu;
            // 0x102cc0: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102ca0;
        }
    }
    ctx->pc = 0x102CC4u;
    // 0x102cc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x102cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102cc8:
    // 0x102cc8: 0x56200023  bnel        $s1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x102CC8u;
    {
        const bool branch_taken_0x102cc8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x102cc8) {
            ctx->pc = 0x102CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102CC8u;
            // 0x102ccc: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102D58u;
            goto label_102d58;
        }
    }
    ctx->pc = 0x102CD0u;
    // 0x102cd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102cd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x102cd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102cd8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x102cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102ce0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x102ce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102ce4: 0x24a51b88  addiu       $a1, $a1, 0x1B88
    ctx->pc = 0x102ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7048));
    // 0x102ce8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x102ce8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x102cec: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x102cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x102cf0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x102cf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102cf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x102cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102cf8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x102cf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x102cfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x102cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102d00: 0x80415ec  j           func_1057B0
    ctx->pc = 0x102D00u;
    ctx->pc = 0x102D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D00u;
    // 0x102d04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    ApSCDEntError__FiPciP5BcObj_0x1057b0(rdram, ctx, runtime); return;
    ctx->pc = 0x102D08u;
label_102d08:
    // 0x102d08: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x102d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x102d0c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x102d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102d10: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x102d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x102d14: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x102D14u;
    {
        const bool branch_taken_0x102d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x102d14) {
            ctx->pc = 0x102D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102D14u;
            // 0x102d18: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102D58u;
            goto label_102d58;
        }
    }
    ctx->pc = 0x102D1Cu;
    // 0x102d1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x102d20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102d24: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x102d28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102d2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x102d2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102d30: 0x24a51b88  addiu       $a1, $a1, 0x1B88
    ctx->pc = 0x102d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7048));
    // 0x102d34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x102d34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x102d38: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x102d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x102d3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x102d3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102d40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x102d40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d44: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x102d44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x102d48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x102d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102d4c: 0x80415ec  j           func_1057B0
    ctx->pc = 0x102D4Cu;
    ctx->pc = 0x102D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D4Cu;
    // 0x102d50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    ApSCDEntError__FiPciP5BcObj_0x1057b0(rdram, ctx, runtime); return;
    ctx->pc = 0x102D54u;
    // 0x102d54: 0x0  nop
    ctx->pc = 0x102d54u;
    // NOP
label_102d58:
    // 0x102d58: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x102d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x102d5c: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x102d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x102d60: 0xae350008  sw          $s5, 0x8($s1)
    ctx->pc = 0x102d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 21));
    // 0x102d64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102d68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x102d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102d6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x102d6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102d70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x102d70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x102d74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x102d74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102d78: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x102d78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x102d7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x102d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102d80: 0x3e00008  jr          $ra
    ctx->pc = 0x102D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D80u;
        // 0x102d84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102D88u;
}
