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

// Function: entry_001813e0
// Address: 0x1813e0 - 0x18147c
void entry_001813e0_0x1813e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001813e0_0x1813e0");
#endif

    ctx->pc = 0x1813e0u;

    // 0x1813e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1813e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1813e4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1813e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1813e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1813e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813ec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1813ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1813f0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1813f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813f4: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1813F4u;
    {
        const bool branch_taken_0x1813f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1813F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813F4u;
        // 0x1813f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813f4) {
            ctx->pc = 0x181520u;
            return;
        }
    }
    ctx->pc = 0x1813FCu;
    // 0x1813fc: 0x6200048  bltz        $s1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1813FCu;
    {
        const bool branch_taken_0x1813fc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x181400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813FCu;
        // 0x181400: 0x2a220080  slti        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813fc) {
            ctx->pc = 0x181520u;
            return;
        }
    }
    ctx->pc = 0x181404u;
    // 0x181404: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x181404u;
    {
        const bool branch_taken_0x181404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181404u;
        // 0x181408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181404) {
            ctx->pc = 0x181524u;
            return;
        }
    }
    ctx->pc = 0x18140Cu;
    // 0x18140c: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x18140cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x181410: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x181410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x181414: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x181414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x181418: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x181418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18141c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x18141cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x181420: 0x94630038  lhu         $v1, 0x38($v1)
    ctx->pc = 0x181420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x181424: 0x1064003f  beq         $v1, $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x181424u;
    {
        const bool branch_taken_0x181424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x181428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181424u;
        // 0x181428: 0x32180  sll         $a0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181424) {
            ctx->pc = 0x181524u;
            return;
        }
    }
    ctx->pc = 0x18142Cu;
    // 0x18142c: 0x8ce60024  lw          $a2, 0x24($a3)
    ctx->pc = 0x18142cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x181430: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x181430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x181434: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x181434u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x181438: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x181438u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x18143c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18143cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x181440: 0x50600039  beql        $v1, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x181440u;
    {
        const bool branch_taken_0x181440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x181440) {
            ctx->pc = 0x181444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181440u;
            // 0x181444: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181528u;
            return;
        }
    }
    ctx->pc = 0x181448u;
    // 0x181448: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x181448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x18144c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x18144Cu;
    {
        const bool branch_taken_0x18144c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18144Cu;
        // 0x181450: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18144c) {
            ctx->pc = 0x1814B0u;
            return;
        }
    }
    ctx->pc = 0x181454u;
    // 0x181454: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x181454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x181458: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x181458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x18145c: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x18145cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x181460: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x181460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x181464: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181464u;
    {
        const bool branch_taken_0x181464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181464u;
        // 0x181468: 0x8e080028  lw          $t0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181464) {
            ctx->pc = 0x18147Cu;
            return;
        }
    }
    ctx->pc = 0x18146Cu;
    // 0x18146c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x18146cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x181470: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x181470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x181474: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x181474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x181478: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x181478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x18147cu;
}
