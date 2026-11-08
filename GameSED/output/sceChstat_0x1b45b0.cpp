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

// Function: sceChstat
// Address: 0x1b45b0 - 0x1b47ec
void sceChstat_0x1b45b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceChstat_0x1b45b0");
#endif

    switch (ctx->pc) {
        case 0x1b45f8u: goto label_1b45f8;
        case 0x1b4610u: goto label_1b4610;
        case 0x1b4630u: goto label_1b4630;
        case 0x1b471cu: goto label_1b471c;
        case 0x1b473cu: goto label_1b473c;
        case 0x1b4764u: goto label_1b4764;
        case 0x1b4774u: goto label_1b4774;
        case 0x1b477cu: goto label_1b477c;
        case 0x1b4790u: goto label_1b4790;
        case 0x1b47a0u: goto label_1b47a0;
        case 0x1b47b0u: goto label_1b47b0;
        case 0x1b47b8u: goto label_1b47b8;
        default: break;
    }

    ctx->pc = 0x1b45b0u;

    // 0x1b45b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1b45b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1b45b4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1b45b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1b45b8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1b45b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1b45bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b45bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45c0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1b45c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1b45c4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1b45c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45c8: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1b45c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1b45cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b45ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45d0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1b45d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1b45d4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1b45d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b45d8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1b45d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1b45dc: 0x3c1e0041  lui         $fp, 0x41
    ctx->pc = 0x1b45dcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
    // 0x1b45e0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1b45e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1b45e4: 0x27d39a80  addiu       $s3, $fp, -0x6580
    ctx->pc = 0x1b45e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941312));
    // 0x1b45e8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1b45e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1b45ec: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1b45ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1b45f0: 0xc06c92c  jal         func_1B24B0
    ctx->pc = 0x1B45F0u;
    SET_GPR_U32(ctx, 31, 0x1B45F8u);
    ctx->pc = 0x1B45F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B45F0u;
    // 0x1b45f4: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24B0u, 0x1B45F0u, 0x1B45F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B45F8u;
label_1b45f8:
    // 0x1b45f8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1b45f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1b45fc: 0x8c62aa04  lw          $v0, -0x55FC($v1)
    ctx->pc = 0x1b45fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x24AA04u));
    // 0x1b4600: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4600u;
    {
        const bool branch_taken_0x1b4600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4600) {
            ctx->pc = 0x1B4604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4600u;
            // 0x1b4604: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4614u;
            goto label_1b4614;
        }
    }
    ctx->pc = 0x1B4608u;
    // 0x1b4608: 0xc06c96e  jal         func_1B25B8
    ctx->pc = 0x1B4608u;
    SET_GPR_U32(ctx, 31, 0x1B4610u);
    ctx->pc = 0x1B25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B25B8u, 0x1B4608u, 0x1B4610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4610u;
label_1b4610:
    // 0x1b4610: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1b4610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1b4614:
    // 0x1b4614: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b4614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4618: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b4618u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b461c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B461Cu;
    {
        const bool branch_taken_0x1b461c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B461Cu;
        // 0x1b4620: 0xa2620050  sb          $v0, 0x50($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b461c) {
            ctx->pc = 0x1B4658u;
            goto label_1b4658;
        }
    }
    ctx->pc = 0x1B4624u;
    // 0x1b4624: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1b4624u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4628: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1b4628u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1b462c: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b462cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_1b4630:
    // 0x1b4630: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b4630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b4634: 0x2a220400  slti        $v0, $s1, 0x400
    ctx->pc = 0x1b4634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b4638: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B4638u;
    {
        const bool branch_taken_0x1b4638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4638u;
        // 0x1b463c: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4638) {
            ctx->pc = 0x1B4664u;
            goto label_1b4664;
        }
    }
    ctx->pc = 0x1B4640u;
    // 0x1b4640: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x1b4640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1b4644: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b4644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4648: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B4648u;
    {
        const bool branch_taken_0x1b4648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4648u;
        // 0x1b464c: 0xa0830050  sb          $v1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4648) {
            ctx->pc = 0x1B4630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4630;
        }
    }
    ctx->pc = 0x1B4650u;
    // 0x1b4650: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4650u;
    {
        const bool branch_taken_0x1b4650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4650u;
        // 0x1b4654: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4650) {
            ctx->pc = 0x1B4668u;
            goto label_1b4668;
        }
    }
    ctx->pc = 0x1B4658u;
label_1b4658:
    // 0x1b4658: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1b4658u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b465c: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1b465cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1b4660: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b4660u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_1b4664:
    // 0x1b4664: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b4664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1b4668:
    // 0x1b4668: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4668u;
    {
        const bool branch_taken_0x1b4668 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b4668) {
            ctx->pc = 0x1B4678u;
            goto label_1b4678;
        }
    }
    ctx->pc = 0x1B4670u;
    // 0x1b4670: 0xa260044f  sb          $zero, 0x44F($s3)
    ctx->pc = 0x1b4670u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1103), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4674: 0x241103ff  addiu       $s1, $zero, 0x3FF
    ctx->pc = 0x1b4674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1b4678:
    // 0x1b4678: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x1b4678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1b467c: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x1b467cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1b4680: 0x6a04000f  ldl         $a0, 0xF($s0)
    ctx->pc = 0x1b4680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1b4684: 0x6e040008  ldr         $a0, 0x8($s0)
    ctx->pc = 0x1b4684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1b4688: 0x6a050017  ldl         $a1, 0x17($s0)
    ctx->pc = 0x1b4688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1b468c: 0x6e050010  ldr         $a1, 0x10($s0)
    ctx->pc = 0x1b468cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1b4690: 0x6a06001f  ldl         $a2, 0x1F($s0)
    ctx->pc = 0x1b4690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1b4694: 0x6e060018  ldr         $a2, 0x18($s0)
    ctx->pc = 0x1b4694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1b4698: 0xb2630017  sdl         $v1, 0x17($s3)
    ctx->pc = 0x1b4698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b469c: 0xb6630010  sdr         $v1, 0x10($s3)
    ctx->pc = 0x1b469cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b46a0: 0xb264001f  sdl         $a0, 0x1F($s3)
    ctx->pc = 0x1b46a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b46a4: 0xb6640018  sdr         $a0, 0x18($s3)
    ctx->pc = 0x1b46a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b46a8: 0xb2650027  sdl         $a1, 0x27($s3)
    ctx->pc = 0x1b46a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b46ac: 0xb6650020  sdr         $a1, 0x20($s3)
    ctx->pc = 0x1b46acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b46b0: 0xb266002f  sdl         $a2, 0x2F($s3)
    ctx->pc = 0x1b46b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b46b4: 0xb6660028  sdr         $a2, 0x28($s3)
    ctx->pc = 0x1b46b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b46b8: 0x6a030027  ldl         $v1, 0x27($s0)
    ctx->pc = 0x1b46b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1b46bc: 0x6e030020  ldr         $v1, 0x20($s0)
    ctx->pc = 0x1b46bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1b46c0: 0x6a04002f  ldl         $a0, 0x2F($s0)
    ctx->pc = 0x1b46c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1b46c4: 0x6e040028  ldr         $a0, 0x28($s0)
    ctx->pc = 0x1b46c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1b46c8: 0x6a050037  ldl         $a1, 0x37($s0)
    ctx->pc = 0x1b46c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1b46cc: 0x6e050030  ldr         $a1, 0x30($s0)
    ctx->pc = 0x1b46ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1b46d0: 0x6a06003f  ldl         $a2, 0x3F($s0)
    ctx->pc = 0x1b46d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1b46d4: 0x6e060038  ldr         $a2, 0x38($s0)
    ctx->pc = 0x1b46d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1b46d8: 0xb2630037  sdl         $v1, 0x37($s3)
    ctx->pc = 0x1b46d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b46dc: 0xb6630030  sdr         $v1, 0x30($s3)
    ctx->pc = 0x1b46dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b46e0: 0xb264003f  sdl         $a0, 0x3F($s3)
    ctx->pc = 0x1b46e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b46e4: 0xb6640038  sdr         $a0, 0x38($s3)
    ctx->pc = 0x1b46e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b46e8: 0xb2650047  sdl         $a1, 0x47($s3)
    ctx->pc = 0x1b46e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b46ec: 0xb6650040  sdr         $a1, 0x40($s3)
    ctx->pc = 0x1b46ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b46f0: 0xb266004f  sdl         $a2, 0x4F($s3)
    ctx->pc = 0x1b46f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b46f4: 0xb6660048  sdr         $a2, 0x48($s3)
    ctx->pc = 0x1b46f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b46f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b46fc: 0xae77000c  sw          $s7, 0xC($s3)
    ctx->pc = 0x1b46fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 23));
    // 0x1b4700: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4704: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b4704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b4708: 0x27d09a80  addiu       $s0, $fp, -0x6580
    ctx->pc = 0x1b4708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941312));
    // 0x1b470c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b470cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b4710: 0x26b5a6c0  addiu       $s5, $s5, -0x5940
    ctx->pc = 0x1b4710u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294944448));
    // 0x1b4714: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B4714u;
    SET_GPR_U32(ctx, 31, 0x1B471Cu);
    ctx->pc = 0x1B4718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4714u;
    // 0x1b4718: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B4714u, 0x1B471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B471Cu;
label_1b471c:
    // 0x1b471c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b471cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4724: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b4724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4728: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x1b4728u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x1b472c: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1b472cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1b4730: 0x24050450  addiu       $a1, $zero, 0x450
    ctx->pc = 0x1b4730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
    // 0x1b4734: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B4734u;
    SET_GPR_U32(ctx, 31, 0x1B473Cu);
    ctx->pc = 0x1B4738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4734u;
    // 0x1b4738: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B4734u, 0x1B473Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B473Cu;
label_1b473c:
    // 0x1b473c: 0x26c4b180  addiu       $a0, $s6, -0x4E80
    ctx->pc = 0x1b473cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947200));
    // 0x1b4740: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b4740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4744: 0x26280051  addiu       $t0, $s1, 0x51
    ctx->pc = 0x1b4744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 81));
    // 0x1b4748: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b4748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b474c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b474cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b4750: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4754: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x1b4754u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4758: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b4758u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b475c: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B475Cu;
    SET_GPR_U32(ctx, 31, 0x1B4764u);
    ctx->pc = 0x1B4760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B475Cu;
    // 0x1b4760: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B475Cu, 0x1B4764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4764u;
label_1b4764:
    // 0x1b4764: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4764u;
    {
        const bool branch_taken_0x1b4764 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B4768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4764u;
        // 0x1b4768: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4764) {
            ctx->pc = 0x1B4784u;
            goto label_1b4784;
        }
    }
    ctx->pc = 0x1B476Cu;
    // 0x1b476c: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B476Cu;
    SET_GPR_U32(ctx, 31, 0x1B4774u);
    ctx->pc = 0x1B4770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B476Cu;
    // 0x1b4770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B476Cu, 0x1B4774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4774u;
label_1b4774:
    // 0x1b4774: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4774u;
    SET_GPR_U32(ctx, 31, 0x1B477Cu);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4774u, 0x1B477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B477Cu;
label_1b477c:
    // 0x1b477c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B477Cu;
    {
        const bool branch_taken_0x1b477c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B477Cu;
        // 0x1b4780: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b477c) {
            ctx->pc = 0x1B47BCu;
            goto label_1b47bc;
        }
    }
    ctx->pc = 0x1B4784u;
label_1b4784:
    // 0x1b4784: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x1b4784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x1b4788: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4788u;
    SET_GPR_U32(ctx, 31, 0x1B4790u);
    ctx->pc = 0x1B478Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4788u;
    // 0x1b478c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4788u, 0x1B4790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4790u;
label_1b4790:
    // 0x1b4790: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4790u;
    {
        const bool branch_taken_0x1b4790 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4790) {
            ctx->pc = 0x1B47A8u;
            goto label_1b47a8;
        }
    }
    ctx->pc = 0x1B4798u;
    // 0x1b4798: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4798u;
    SET_GPR_U32(ctx, 31, 0x1B47A0u);
    ctx->pc = 0x1B479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4798u;
    // 0x1b479c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4798u, 0x1B47A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B47A0u;
label_1b47a0:
    // 0x1b47a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B47A0u;
    {
        const bool branch_taken_0x1b47a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B47A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47A0u;
        // 0x1b47a4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47a0) {
            ctx->pc = 0x1B47BCu;
            goto label_1b47bc;
        }
    }
    ctx->pc = 0x1B47A8u;
label_1b47a8:
    // 0x1b47a8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B47A8u;
    SET_GPR_U32(ctx, 31, 0x1B47B0u);
    ctx->pc = 0x1B47ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B47A8u;
    // 0x1b47ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B47A8u, 0x1B47B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B47B0u;
label_1b47b0:
    // 0x1b47b0: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B47B0u;
    SET_GPR_U32(ctx, 31, 0x1B47B8u);
    ctx->pc = 0x1B47B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B47B0u;
    // 0x1b47b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B47B0u, 0x1B47B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B47B8u;
label_1b47b8:
    // 0x1b47b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b47bc:
    // 0x1b47bc: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1b47bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b47c0: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1b47c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b47c4: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1b47c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b47c8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1b47c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b47cc: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1b47ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b47d0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b47d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b47d4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b47d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b47d8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b47d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b47dc: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b47dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b47e0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b47e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b47e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B47E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B47E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47E4u;
        // 0x1b47e8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B47E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B47ECu;
}
