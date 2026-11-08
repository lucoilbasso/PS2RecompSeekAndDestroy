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

// Function: BMemPMgrAllocMgr__FUiP8BMemPoolUib
// Address: 0x19f438 - 0x19f55c
void BMemPMgrAllocMgr__FUiP8BMemPoolUib_0x19f438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrAllocMgr__FUiP8BMemPoolUib_0x19f438");
#endif

    switch (ctx->pc) {
        case 0x19f470u: goto label_19f470;
        case 0x19f490u: goto label_19f490;
        case 0x19f4d0u: goto label_19f4d0;
        case 0x19f4ecu: goto label_19f4ec;
        case 0x19f508u: goto label_19f508;
        case 0x19f524u: goto label_19f524;
        case 0x19f538u: goto label_19f538;
        default: break;
    }

    ctx->pc = 0x19f438u;

    // 0x19f438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19f438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f43c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19f43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19f440: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19f440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f444: 0x8f848e08  lw          $a0, -0x71F8($gp)
    ctx->pc = 0x19f444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938120)));
    // 0x19f448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f44c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x19f44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f450: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19f450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19f454: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19f454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f458: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19f458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x19f45c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19f45cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f460: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x19f460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x19f464: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19f464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x19f468: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x19F468u;
    SET_GPR_U32(ctx, 31, 0x19F470u);
    ctx->pc = 0x19F46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F468u;
    // 0x19f46c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x19F468u, 0x19F470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F470u;
label_19f470:
    // 0x19f470: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x19f470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x19f474: 0xaf928e0c  sw          $s2, -0x71F4($gp)
    ctx->pc = 0x19f474u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938124), GPR_U32(ctx, 18));
    // 0x19f478: 0x2463f640  addiu       $v1, $v1, -0x9C0
    ctx->pc = 0x19f478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964800));
    // 0x19f47c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x23F640u));
    // 0x19f480: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19F480u;
    {
        const bool branch_taken_0x19f480 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F480u;
        // 0x19f484: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f480) {
            ctx->pc = 0x19F4B4u;
            goto label_19f4b4;
        }
    }
    ctx->pc = 0x19F488u;
    // 0x19f488: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19f488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19f48c: 0x0  nop
    ctx->pc = 0x19f48cu;
    // NOP
label_19f490:
    // 0x19f490: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x19f490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x19f494: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F494u;
    {
        const bool branch_taken_0x19f494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F494u;
        // 0x19f498: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f494) {
            ctx->pc = 0x19F4B4u;
            goto label_19f4b4;
        }
    }
    ctx->pc = 0x19F49Cu;
    // 0x19f49c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f4a0: 0x0  nop
    ctx->pc = 0x19f4a0u;
    // NOP
    // 0x19f4a4: 0x0  nop
    ctx->pc = 0x19f4a4u;
    // NOP
    // 0x19f4a8: 0x0  nop
    ctx->pc = 0x19f4a8u;
    // NOP
    // 0x19f4ac: 0x5622fff8  bnel        $s1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19F4ACu;
    {
        const bool branch_taken_0x19f4ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f4ac) {
            ctx->pc = 0x19F4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F4ACu;
            // 0x19f4b0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f490;
        }
    }
    ctx->pc = 0x19F4B4u;
label_19f4b4:
    // 0x19f4b4: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x19F4B4u;
    {
        const bool branch_taken_0x19f4b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4B4u;
        // 0x19f4b8: 0x2643004f  addiu       $v1, $s2, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4b4) {
            ctx->pc = 0x19F530u;
            goto label_19f530;
        }
    }
    ctx->pc = 0x19F4BCu;
    // 0x19f4bc: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x19f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x19f4c0: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x19F4C0u;
    {
        const bool branch_taken_0x19f4c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4C0u;
        // 0x19f4c4: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4c0) {
            ctx->pc = 0x19F500u;
            goto label_19f500;
        }
    }
    ctx->pc = 0x19F4C8u;
    // 0x19f4c8: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x19f4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19f4cc: 0x0  nop
    ctx->pc = 0x19f4ccu;
    // NOP
label_19f4d0:
    // 0x19f4d0: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19F4D0u;
    {
        const bool branch_taken_0x19f4d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4D0u;
        // 0x19f4d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4d0) {
            ctx->pc = 0x19F530u;
            goto label_19f530;
        }
    }
    ctx->pc = 0x19F4D8u;
    // 0x19f4d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19f4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f4e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4e4: 0xc067c9a  jal         func_19F268
    ctx->pc = 0x19F4E4u;
    SET_GPR_U32(ctx, 31, 0x19F4ECu);
    ctx->pc = 0x19F4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F4E4u;
    // 0x19f4e8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F268u, 0x19F4E4u, 0x19F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F4ECu;
label_19f4ec:
    // 0x19f4ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19f4ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4f0: 0x5260fff7  beql        $s3, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19F4F0u;
    {
        const bool branch_taken_0x19f4f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f4f0) {
            ctx->pc = 0x19F4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F4F0u;
            // 0x19f4f4: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f4d0;
        }
    }
    ctx->pc = 0x19F4F8u;
    // 0x19f4f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19F4F8u;
    {
        const bool branch_taken_0x19f4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f4f8) {
            ctx->pc = 0x19F530u;
            goto label_19f530;
        }
    }
    ctx->pc = 0x19F500u;
label_19f500:
    // 0x19f500: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x19f500u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19f504: 0x0  nop
    ctx->pc = 0x19f504u;
    // NOP
label_19f508:
    // 0x19f508: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19F508u;
    {
        const bool branch_taken_0x19f508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F508u;
        // 0x19f50c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f508) {
            ctx->pc = 0x19F530u;
            goto label_19f530;
        }
    }
    ctx->pc = 0x19F510u;
    // 0x19f510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f514: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19f514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f518: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19f518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f51c: 0xc067c9a  jal         func_19F268
    ctx->pc = 0x19F51Cu;
    SET_GPR_U32(ctx, 31, 0x19F524u);
    ctx->pc = 0x19F520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F51Cu;
    // 0x19f520: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F268u, 0x19F51Cu, 0x19F524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F524u;
label_19f524:
    // 0x19f524: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19f524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f528: 0x5260fff7  beql        $s3, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19F528u;
    {
        const bool branch_taken_0x19f528 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f528) {
            ctx->pc = 0x19F52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F528u;
            // 0x19f52c: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f508;
        }
    }
    ctx->pc = 0x19F530u;
label_19f530:
    // 0x19f530: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x19F530u;
    SET_GPR_U32(ctx, 31, 0x19F538u);
    ctx->pc = 0x19F534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F530u;
    // 0x19f534: 0x8f848e08  lw          $a0, -0x71F8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x19F530u, 0x19F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F538u;
label_19f538:
    // 0x19f538: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x19f538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f53c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f53cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f540: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19f540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f544: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19f544u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f548: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19f548u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19f54c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x19f54cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f550: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x19f550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19f554: 0x3e00008  jr          $ra
    ctx->pc = 0x19F554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F554u;
        // 0x19f558: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F55Cu;
}
