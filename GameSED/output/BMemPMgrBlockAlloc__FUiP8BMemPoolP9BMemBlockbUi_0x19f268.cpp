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

// Function: BMemPMgrBlockAlloc__FUiP8BMemPoolP9BMemBlockbUi
// Address: 0x19f268 - 0x19f434
void BMemPMgrBlockAlloc__FUiP8BMemPoolP9BMemBlockbUi_0x19f268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrBlockAlloc__FUiP8BMemPoolP9BMemBlockbUi_0x19f268");
#endif

    ctx->pc = 0x19f268u;

    // 0x19f268: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x19f268u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f26c: 0x3c0d0fff  lui         $t5, 0xFFF
    ctx->pc = 0x19f26cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4095 << 16));
    // 0x19f270: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x19f270u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19f274: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x19f274u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x19f278: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x19f278u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f27c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x19f27cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f280: 0x16d2024  and         $a0, $t3, $t5
    ctx->pc = 0x19f280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 13));
    // 0x19f284: 0x8a102b  sltu        $v0, $a0, $t2
    ctx->pc = 0x19f284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x19f288: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x19F288u;
    {
        const bool branch_taken_0x19f288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F288u;
        // 0x19f28c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f288) {
            ctx->pc = 0x19F42Cu;
            goto label_19f42c;
        }
    }
    ctx->pc = 0x19F290u;
    // 0x19f290: 0x8a3023  subu        $a2, $a0, $t2
    ctx->pc = 0x19f290u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x19f294: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x19f294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x19f298: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19F298u;
    {
        const bool branch_taken_0x19f298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F298u;
        // 0x19f29c: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f298) {
            ctx->pc = 0x19F2F0u;
            goto label_19f2f0;
        }
    }
    ctx->pc = 0x19F2A0u;
    // 0x19f2a0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x19f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x19f2a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19f2a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19f2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19f2ac: 0x8d250008  lw          $a1, 0x8($t1)
    ctx->pc = 0x19f2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x19f2b0: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x19f2b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x19f2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19f2b8: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x19f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x19f2bc: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x19f2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2c0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F2C0u;
    {
        const bool branch_taken_0x19f2c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2C0u;
        // 0x19f2c4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2c0) {
            ctx->pc = 0x19F2D0u;
            goto label_19f2d0;
        }
    }
    ctx->pc = 0x19F2C8u;
    // 0x19f2c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F2C8u;
    {
        const bool branch_taken_0x19f2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2C8u;
        // 0x19f2cc: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2c8) {
            ctx->pc = 0x19F2D4u;
            goto label_19f2d4;
        }
    }
    ctx->pc = 0x19F2D0u;
label_19f2d0:
    // 0x19f2d0: 0xad82000c  sw          $v0, 0xC($t4)
    ctx->pc = 0x19f2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 2));
label_19f2d4:
    // 0x19f2d4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x19f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x19f2d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F2D8u;
    {
        const bool branch_taken_0x19f2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2D8u;
        // 0x19f2dc: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2d8) {
            ctx->pc = 0x19F2E8u;
            goto label_19f2e8;
        }
    }
    ctx->pc = 0x19F2E0u;
    // 0x19f2e0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x19F2E0u;
    {
        const bool branch_taken_0x19f2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2E0u;
        // 0x19f2e4: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2e0) {
            ctx->pc = 0x19F3C8u;
            goto label_19f3c8;
        }
    }
    ctx->pc = 0x19F2E8u;
label_19f2e8:
    // 0x19f2e8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x19F2E8u;
    {
        const bool branch_taken_0x19f2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2E8u;
        // 0x19f2ec: 0xad420008  sw          $v0, 0x8($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2e8) {
            ctx->pc = 0x19F3C8u;
            goto label_19f3c8;
        }
    }
    ctx->pc = 0x19F2F0u;
label_19f2f0:
    // 0x19f2f0: 0x14e00021  bnez        $a3, . + 4 + (0x21 << 2)
    ctx->pc = 0x19F2F0u;
    {
        const bool branch_taken_0x19f2f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2F0u;
        // 0x19f2f4: 0x3c04f000  lui         $a0, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2f0) {
            ctx->pc = 0x19F378u;
            goto label_19f378;
        }
    }
    ctx->pc = 0x19F2F8u;
    // 0x19f2f8: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x19f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x19f2fc: 0x8d250008  lw          $a1, 0x8($t1)
    ctx->pc = 0x19f2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x19f300: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x19f300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x19f304: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x19f304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x19f308: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x19f308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x19f30c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x19f30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x19f310: 0x4d2024  and         $a0, $v0, $t5
    ctx->pc = 0x19f310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x19f314: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x19f314u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x19f318: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x19f318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x19f31c: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x19f31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f320: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x19f320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x19f324: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19f324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f328: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x19f328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x19f32c: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x19f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x19f330: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x19f330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x19f334: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x19f334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x19f338: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F338u;
    {
        const bool branch_taken_0x19f338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F338u;
        // 0x19f33c: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f338) {
            ctx->pc = 0x19F348u;
            goto label_19f348;
        }
    }
    ctx->pc = 0x19F340u;
    // 0x19f340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F340u;
    {
        const bool branch_taken_0x19f340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F340u;
        // 0x19f344: 0xac44000c  sw          $a0, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f340) {
            ctx->pc = 0x19F34Cu;
            goto label_19f34c;
        }
    }
    ctx->pc = 0x19F348u;
label_19f348:
    // 0x19f348: 0xad84000c  sw          $a0, 0xC($t4)
    ctx->pc = 0x19f348u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 4));
label_19f34c:
    // 0x19f34c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x19f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x19f350: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F350u;
    {
        const bool branch_taken_0x19f350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f350) {
            ctx->pc = 0x19F354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F350u;
            // 0x19f354: 0xacc50008  sw          $a1, 0x8($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F35Cu;
            goto label_19f35c;
        }
    }
    ctx->pc = 0x19F358u;
    // 0x19f358: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x19f358u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
label_19f35c:
    // 0x19f35c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19f360: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x19f360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x19f364: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19f364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19f368: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x19f368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19f36c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19f370: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19F370u;
    {
        const bool branch_taken_0x19f370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F370u;
        // 0x19f374: 0xac64fff0  sw          $a0, -0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f370) {
            ctx->pc = 0x19F3C8u;
            goto label_19f3c8;
        }
    }
    ctx->pc = 0x19F378u;
label_19f378:
    // 0x19f378: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x19f378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x19f37c: 0x1642024  and         $a0, $t3, $a0
    ctx->pc = 0x19f37cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x19f380: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19f380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19f384: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x19f384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x19f388: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x19f388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x19f38c: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x19f38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x19f390: 0x8d2824  and         $a1, $a0, $t5
    ctx->pc = 0x19f390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 13));
    // 0x19f394: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19f394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19f398: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x19f398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x19f39c: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x19f39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x19f3a0: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x19f3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x19f3a4: 0x4d3024  and         $a2, $v0, $t5
    ctx->pc = 0x19f3a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x19f3a8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x19f3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x19f3ac: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x19f3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x19f3b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19f3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x19f3b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x19f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19f3b8: 0xaca9fff0  sw          $t1, -0x10($a1)
    ctx->pc = 0x19f3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 9));
    // 0x19f3bc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x19f3bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f3c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19f3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19f3c4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x19f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_19f3c8:
    // 0x19f3c8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x19f3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19f3cc: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x19f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x19f3d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19f3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19f3d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x19f3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19f3d8: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F3D8u;
    {
        const bool branch_taken_0x19f3d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3D8u;
        // 0x19f3dc: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3d8) {
            ctx->pc = 0x19F3F0u;
            goto label_19f3f0;
        }
    }
    ctx->pc = 0x19F3E0u;
    // 0x19f3e0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x19f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x19f3e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19F3E4u;
    {
        const bool branch_taken_0x19f3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3E4u;
        // 0x19f3e8: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3e4) {
            ctx->pc = 0x19F3FCu;
            goto label_19f3fc;
        }
    }
    ctx->pc = 0x19F3ECu;
    // 0x19f3ec: 0x0  nop
    ctx->pc = 0x19f3ecu;
    // NOP
label_19f3f0:
    // 0x19f3f0: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x19f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x19f3f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19f3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19f3f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19f3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_19f3fc:
    // 0x19f3fc: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x19f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x19f400: 0xad280004  sw          $t0, 0x4($t1)
    ctx->pc = 0x19f400u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 8));
    // 0x19f404: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x19f404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x19f408: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x19f408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19f40c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19f40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19f410: 0x8d840010  lw          $a0, 0x10($t4)
    ctx->pc = 0x19f410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x19f414: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19f414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f418: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x19f418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19f41c: 0xad850014  sw          $a1, 0x14($t4)
    ctx->pc = 0x19f41cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 5));
    // 0x19f420: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19f420u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19f424: 0x25230010  addiu       $v1, $t1, 0x10
    ctx->pc = 0x19f424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x19f428: 0xad840010  sw          $a0, 0x10($t4)
    ctx->pc = 0x19f428u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 4));
label_19f42c:
    // 0x19f42c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F42Cu;
        // 0x19f430: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F434u;
}
