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

// Function: entry_001764fc
// Address: 0x1764fc - 0x1765c0
void entry_001764fc_0x1764fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001764fc_0x1764fc");
#endif

    switch (ctx->pc) {
        case 0x176508u: goto label_176508;
        case 0x17652cu: goto label_17652c;
        case 0x17654cu: goto label_17654c;
        case 0x17659cu: goto label_17659c;
        case 0x1765a4u: goto label_1765a4;
        case 0x1765acu: goto label_1765ac;
        default: break;
    }

    ctx->pc = 0x1764fcu;

    // 0x1764fc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1764fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x176500: 0xc06a8b6  jal         func_1AA2D8
    ctx->pc = 0x176500u;
    SET_GPR_U32(ctx, 31, 0x176508u);
    ctx->pc = 0x176504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176500u;
    // 0x176504: 0x24120200  addiu       $s2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA2D8u, 0x176500u, 0x176508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176508u;
label_176508:
    // 0x176508: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x176508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17650c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17650cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176510: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x176510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x176514: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x176514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x176518: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x176518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17651c: 0x2409003a  addiu       $t1, $zero, 0x3A
    ctx->pc = 0x17651cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x176520: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x176520u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176524: 0xc06aab4  jal         func_1AAAD0
    ctx->pc = 0x176524u;
    SET_GPR_U32(ctx, 31, 0x17652Cu);
    ctx->pc = 0x176528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176524u;
    // 0x176528: 0x241101c0  addiu       $s1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAAD0u, 0x176524u, 0x17652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17652Cu;
label_17652c:
    // 0x17652c: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x17652cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x176530: 0x2409003a  addiu       $t1, $zero, 0x3A
    ctx->pc = 0x176530u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x176534: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x176534u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17653c: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x17653cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x176540: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x176540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x176544: 0xc06aab4  jal         func_1AAAD0
    ctx->pc = 0x176544u;
    SET_GPR_U32(ctx, 31, 0x17654Cu);
    ctx->pc = 0x176548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176544u;
    // 0x176548: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAAD0u, 0x176544u, 0x17654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17654Cu;
label_17654c:
    // 0x17654c: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x17654cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x176550: 0xde040058  ld          $a0, 0x58($s0)
    ctx->pc = 0x176550u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x176554: 0x2402fe00  addiu       $v0, $zero, -0x200
    ctx->pc = 0x176554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x176558: 0xde050080  ld          $a1, 0x80($s0)
    ctx->pc = 0x176558u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x17655c: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x17655cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x176560: 0xde060090  ld          $a2, 0x90($s0)
    ctx->pc = 0x176560u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x176564: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x176564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x176568: 0xde030180  ld          $v1, 0x180($s0)
    ctx->pc = 0x176568u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x17656c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x17656cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x176570: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x176570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x176574: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x176574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x176578: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x176578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17657c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x17657cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x176580: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x176580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x176584: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x176584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x176588: 0xfe040058  sd          $a0, 0x58($s0)
    ctx->pc = 0x176588u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 4));
    // 0x17658c: 0xfe050080  sd          $a1, 0x80($s0)
    ctx->pc = 0x17658cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 5));
    // 0x176590: 0xfe060090  sd          $a2, 0x90($s0)
    ctx->pc = 0x176590u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 6));
    // 0x176594: 0xc06f1b0  jal         func_1BC6C0
    ctx->pc = 0x176594u;
    SET_GPR_U32(ctx, 31, 0x17659Cu);
    ctx->pc = 0x176598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176594u;
    // 0x176598: 0xfe030180  sd          $v1, 0x180($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC6C0u, 0x176594u, 0x17659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17659Cu;
label_17659c:
    // 0x17659c: 0xc067986  jal         func_19E618
    ctx->pc = 0x17659Cu;
    SET_GPR_U32(ctx, 31, 0x1765A4u);
    ctx->pc = 0x19E618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E618u, 0x17659Cu, 0x1765A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1765A4u;
label_1765a4:
    // 0x1765a4: 0xc066424  jal         func_199090
    ctx->pc = 0x1765A4u;
    SET_GPR_U32(ctx, 31, 0x1765ACu);
    ctx->pc = 0x199090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199090u, 0x1765A4u, 0x1765ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1765ACu;
label_1765ac:
    // 0x1765ac: 0x56600034  bnel        $s3, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1765ACu;
    {
        const bool branch_taken_0x1765ac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1765ac) {
            ctx->pc = 0x1765B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1765ACu;
            // 0x1765b0: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176680u;
            return;
        }
    }
    ctx->pc = 0x1765B4u;
    // 0x1765b4: 0x26030480  addiu       $v1, $s0, 0x480
    ctx->pc = 0x1765b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x1765b8: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x1765b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1765bc: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1765bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->pc = 0x1765c0u;
}
