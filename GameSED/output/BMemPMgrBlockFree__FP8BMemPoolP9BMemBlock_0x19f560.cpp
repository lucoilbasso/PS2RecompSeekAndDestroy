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

// Function: BMemPMgrBlockFree__FP8BMemPoolP9BMemBlock
// Address: 0x19f560 - 0x19f754
void BMemPMgrBlockFree__FP8BMemPoolP9BMemBlock_0x19f560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrBlockFree__FP8BMemPoolP9BMemBlock_0x19f560");
#endif

    switch (ctx->pc) {
        case 0x19f6a0u: goto label_19f6a0;
        default: break;
    }

    ctx->pc = 0x19f560u;

    // 0x19f560: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x19f560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f564: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x19f564u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f568: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x19f568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19f56c: 0x3c090fff  lui         $t1, 0xFFF
    ctx->pc = 0x19f56cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4095 << 16));
    // 0x19f570: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x19f570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x19f574: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x19f574u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x19f578: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x19f578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x19f57c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19f57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f580: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19f580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19f584: 0xad040014  sw          $a0, 0x14($t0)
    ctx->pc = 0x19f584u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 4));
    // 0x19f588: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x19f588u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x19f58c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x19f58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19f590: 0x4810018  bgez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x19F590u;
    {
        const bool branch_taken_0x19f590 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19F594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F590u;
        // 0x19f594: 0xe25821  addu        $t3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f590) {
            ctx->pc = 0x19F5F4u;
            goto label_19f5f4;
        }
    }
    ctx->pc = 0x19F598u;
    // 0x19f598: 0x8ce7fff0  lw          $a3, -0x10($a3)
    ctx->pc = 0x19f598u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967280)));
    // 0x19f59c: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x19f59cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x19f5a0: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x19f5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x19f5a4: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x19f5a4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5a8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x19f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19f5ac: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x19f5acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5b0: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x19f5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x19f5b4: 0x491824  and         $v1, $v0, $t1
    ctx->pc = 0x19f5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x19f5b8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x19f5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x19f5bc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x19f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19f5c0: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x19f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x19f5c4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x19f5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x19f5c8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F5C8u;
    {
        const bool branch_taken_0x19f5c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5C8u;
        // 0x19f5cc: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5c8) {
            ctx->pc = 0x19F5D8u;
            goto label_19f5d8;
        }
    }
    ctx->pc = 0x19F5D0u;
    // 0x19f5d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F5D0u;
    {
        const bool branch_taken_0x19f5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5D0u;
        // 0x19f5d4: 0xacc3000c  sw          $v1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5d0) {
            ctx->pc = 0x19F5DCu;
            goto label_19f5dc;
        }
    }
    ctx->pc = 0x19F5D8u;
label_19f5d8:
    // 0x19f5d8: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x19f5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
label_19f5dc:
    // 0x19f5dc: 0x8d43000c  lw          $v1, 0xC($t2)
    ctx->pc = 0x19f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x19f5e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F5E0u;
    {
        const bool branch_taken_0x19f5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5E0u;
        // 0x19f5e4: 0x8d420008  lw          $v0, 0x8($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5e0) {
            ctx->pc = 0x19F5F0u;
            goto label_19f5f0;
        }
    }
    ctx->pc = 0x19F5E8u;
    // 0x19f5e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F5E8u;
    {
        const bool branch_taken_0x19f5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5E8u;
        // 0x19f5ec: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5e8) {
            ctx->pc = 0x19F5F4u;
            goto label_19f5f4;
        }
    }
    ctx->pc = 0x19F5F0u;
label_19f5f0:
    // 0x19f5f0: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x19f5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
label_19f5f4:
    // 0x19f5f4: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x19f5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x19f5f8: 0x51783  sra         $v0, $a1, 30
    ctx->pc = 0x19f5f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 30));
    // 0x19f5fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f600: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x19F600u;
    {
        const bool branch_taken_0x19f600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F600u;
        // 0x19f604: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f600) {
            ctx->pc = 0x19F678u;
            goto label_19f678;
        }
    }
    ctx->pc = 0x19F608u;
    // 0x19f608: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x19f608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19f60c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19f60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19f610: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x19f610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f614: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x19f614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x19f618: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19f618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19f61c: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x19f61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x19f620: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19f620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19f624: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x19f624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x19f628: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x19f628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x19f62c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19f62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19f630: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x19f630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x19f634: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x19f634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f638: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F638u;
    {
        const bool branch_taken_0x19f638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F638u;
        // 0x19f63c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f638) {
            ctx->pc = 0x19F648u;
            goto label_19f648;
        }
    }
    ctx->pc = 0x19F640u;
    // 0x19f640: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F640u;
    {
        const bool branch_taken_0x19f640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F640u;
        // 0x19f644: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f640) {
            ctx->pc = 0x19F64Cu;
            goto label_19f64c;
        }
    }
    ctx->pc = 0x19F648u;
label_19f648:
    // 0x19f648: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x19f648u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_19f64c:
    // 0x19f64c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x19f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x19f650: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F650u;
    {
        const bool branch_taken_0x19f650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F650u;
        // 0x19f654: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f650) {
            ctx->pc = 0x19F660u;
            goto label_19f660;
        }
    }
    ctx->pc = 0x19F658u;
    // 0x19f658: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F658u;
    {
        const bool branch_taken_0x19f658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F658u;
        // 0x19f65c: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f658) {
            ctx->pc = 0x19F664u;
            goto label_19f664;
        }
    }
    ctx->pc = 0x19F660u;
label_19f660:
    // 0x19f660: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x19f660u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_19f664:
    // 0x19f664: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x19f664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19f668: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x19f668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x19f66c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19f66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19f670: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x19f670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19f674: 0xe35821  addu        $t3, $a3, $v1
    ctx->pc = 0x19f674u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_19f678:
    // 0x19f678: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x19f678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f67c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x19f67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f680: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x19f680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19f684: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x19F684u;
    {
        const bool branch_taken_0x19f684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F684u;
        // 0x19f688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f684) {
            ctx->pc = 0x19F6C4u;
            goto label_19f6c4;
        }
    }
    ctx->pc = 0x19F68Cu;
    // 0x19f68c: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x19f68cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19f690: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19F690u;
    {
        const bool branch_taken_0x19f690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f690) {
            ctx->pc = 0x19F6C4u;
            goto label_19f6c4;
        }
    }
    ctx->pc = 0x19F698u;
    // 0x19f698: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x19f698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f69c: 0x0  nop
    ctx->pc = 0x19f69cu;
    // NOP
label_19f6a0:
    // 0x19f6a0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x19f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x19f6a4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F6A4u;
    {
        const bool branch_taken_0x19f6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6A4u;
        // 0x19f6a8: 0xa3102b  sltu        $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f6a4) {
            ctx->pc = 0x19F6C4u;
            goto label_19f6c4;
        }
    }
    ctx->pc = 0x19F6ACu;
    // 0x19f6ac: 0x0  nop
    ctx->pc = 0x19f6acu;
    // NOP
    // 0x19f6b0: 0x0  nop
    ctx->pc = 0x19f6b0u;
    // NOP
    // 0x19f6b4: 0x0  nop
    ctx->pc = 0x19f6b4u;
    // NOP
    // 0x19f6b8: 0x0  nop
    ctx->pc = 0x19f6b8u;
    // NOP
    // 0x19f6bc: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19F6BCu;
    {
        const bool branch_taken_0x19f6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f6bc) {
            ctx->pc = 0x19F6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F6BCu;
            // 0x19f6c0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f6a0;
        }
    }
    ctx->pc = 0x19F6C4u;
label_19f6c4:
    // 0x19f6c4: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x19F6C4u;
    {
        const bool branch_taken_0x19f6c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f6c4) {
            ctx->pc = 0x19F6F0u;
            goto label_19f6f0;
        }
    }
    ctx->pc = 0x19F6CCu;
    // 0x19f6cc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x19f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19f6d0: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x19f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x19f6d4: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x19f6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x19f6d8: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x19f6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x19f6dc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x19f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x19f6e0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x19F6E0u;
    {
        const bool branch_taken_0x19f6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f6e0) {
            ctx->pc = 0x19F6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F6E0u;
            // 0x19f6e4: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F72Cu;
            goto label_19f72c;
        }
    }
    ctx->pc = 0x19F6E8u;
    // 0x19f6e8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19F6E8u;
    {
        const bool branch_taken_0x19f6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6E8u;
        // 0x19f6ec: 0xac45000c  sw          $a1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f6e8) {
            ctx->pc = 0x19F72Cu;
            goto label_19f72c;
        }
    }
    ctx->pc = 0x19F6F0u;
label_19f6f0:
    // 0x19f6f0: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x19F6F0u;
    {
        const bool branch_taken_0x19f6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f6f0) {
            ctx->pc = 0x19F6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F6F0u;
            // 0x19f6f4: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F720u;
            goto label_19f720;
        }
    }
    ctx->pc = 0x19F6F8u;
    // 0x19f6f8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x19f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x19f6fc: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x19f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x19f700: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x19f700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x19f704: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x19f704u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x19f708: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x19f708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x19f70c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F70Cu;
    {
        const bool branch_taken_0x19f70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f70c) {
            ctx->pc = 0x19F710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F70Cu;
            // 0x19f710: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F72Cu;
            goto label_19f72c;
        }
    }
    ctx->pc = 0x19F714u;
    // 0x19f714: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19F714u;
    {
        const bool branch_taken_0x19f714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F714u;
        // 0x19f718: 0xac450008  sw          $a1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f714) {
            ctx->pc = 0x19F72Cu;
            goto label_19f72c;
        }
    }
    ctx->pc = 0x19F71Cu;
    // 0x19f71c: 0x0  nop
    ctx->pc = 0x19f71cu;
    // NOP
label_19f720:
    // 0x19f720: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x19f720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x19f724: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x19f724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x19f728: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x19f728u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_19f72c:
    // 0x19f72c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x19f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19f730: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19f730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x19f734: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19f734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x19f738: 0xad67fff0  sw          $a3, -0x10($t3)
    ctx->pc = 0x19f738u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294967280), GPR_U32(ctx, 7));
    // 0x19f73c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19f73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19f740: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x19f740u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x19f744: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x19f744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x19f748: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x19f748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x19f74c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F74Cu;
        // 0x19f750: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F754u;
}
