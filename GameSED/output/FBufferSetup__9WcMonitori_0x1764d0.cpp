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

// Function: FBufferSetup__9WcMonitori
// Address: 0x1764d0 - 0x1767b4
void FBufferSetup__9WcMonitori_0x1764d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FBufferSetup__9WcMonitori_0x1764d0");
#endif

    switch (ctx->pc) {
        case 0x176508u: goto label_176508;
        case 0x17652cu: goto label_17652c;
        case 0x17654cu: goto label_17654c;
        case 0x17659cu: goto label_17659c;
        case 0x1765a4u: goto label_1765a4;
        case 0x1765acu: goto label_1765ac;
        case 0x1765c0u: goto label_1765c0;
        case 0x176600u: goto label_176600;
        case 0x1766c0u: goto label_1766c0;
        default: break;
    }

    ctx->pc = 0x1764d0u;

    // 0x1764d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1764d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1764d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1764d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1764d8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1764d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1764dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1764dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764e0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1764e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1764e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1764e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1764e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1764ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1764f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1764f4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1764f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1764f8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1764f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
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
            goto label_176680;
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
label_1765c0:
    // 0x1765c0: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x1765c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1765c4: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x1765c4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1765c8: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x1765c8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1765cc: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x1765ccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1765d0: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x1765d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x1765d4: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x1765d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x1765d8: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x1765d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x1765dc: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x1765dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x1765e0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1765e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1765e4: 0x0  nop
    ctx->pc = 0x1765e4u;
    // NOP
    // 0x1765e8: 0x0  nop
    ctx->pc = 0x1765e8u;
    // NOP
    // 0x1765ec: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1765ECu;
    {
        const bool branch_taken_0x1765ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1765F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765ECu;
        // 0x1765f0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765ec) {
            ctx->pc = 0x1765C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1765c0;
        }
    }
    ctx->pc = 0x1765F4u;
    // 0x1765f4: 0x26030500  addiu       $v1, $s0, 0x500
    ctx->pc = 0x1765f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1280));
    // 0x1765f8: 0x26020170  addiu       $v0, $s0, 0x170
    ctx->pc = 0x1765f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x1765fc: 0x260401f0  addiu       $a0, $s0, 0x1F0
    ctx->pc = 0x1765fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_176600:
    // 0x176600: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x176600u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176604: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x176604u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x176608: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x176608u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17660c: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x17660cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x176610: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x176610u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x176614: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x176614u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x176618: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x176618u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x17661c: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x17661cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x176620: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x176620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x176624: 0x0  nop
    ctx->pc = 0x176624u;
    // NOP
    // 0x176628: 0x0  nop
    ctx->pc = 0x176628u;
    // NOP
    // 0x17662c: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17662Cu;
    {
        const bool branch_taken_0x17662c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x176630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17662Cu;
        // 0x176630: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17662c) {
            ctx->pc = 0x176600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176600;
        }
    }
    ctx->pc = 0x176634u;
    // 0x176634: 0xde020090  ld          $v0, 0x90($s0)
    ctx->pc = 0x176634u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x176638: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x176638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x17663c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x17663cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x176640: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x176640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x176644: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x176644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x176648: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x176648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17664c: 0x27848c80  addiu       $a0, $gp, -0x7380
    ctx->pc = 0x17664cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937728));
    // 0x176650: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x176650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x176654: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x176654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x176658: 0xff828c80  sd          $v0, -0x7380($gp)
    ctx->pc = 0x176658u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937728), GPR_U64(ctx, 2));
    // 0x17665c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17665cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x176660: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x176660u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x176664: 0x27858c90  addiu       $a1, $gp, -0x7370
    ctx->pc = 0x176664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
    // 0x176668: 0xde030090  ld          $v1, 0x90($s0)
    ctx->pc = 0x176668u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x17666c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17666cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176670: 0xff838c90  sd          $v1, -0x7370($gp)
    ctx->pc = 0x176670u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937744), GPR_U64(ctx, 3));
    // 0x176674: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x176674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x176678: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x176678u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x17667c: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x17667cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
label_176680:
    // 0x176680: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x176680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x176684: 0x2610e790  addiu       $s0, $s0, -0x1870
    ctx->pc = 0x176684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961040));
    // 0x176688: 0x123043  sra         $a2, $s2, 1
    ctx->pc = 0x176688u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 18), 1));
    // 0x17668c: 0x113843  sra         $a3, $s1, 1
    ctx->pc = 0x17668cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 17), 1));
    // 0x176690: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x176690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x176694: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x176694u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176698: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x176698u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x17669c: 0x473823  subu        $a3, $v0, $a3
    ctx->pc = 0x17669cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1766a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1766a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766a4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1766a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1766a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1766acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1766b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1766b4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1766b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1766b8: 0xc06aa72  jal         func_1AA9C8
    ctx->pc = 0x1766B8u;
    SET_GPR_U32(ctx, 31, 0x1766C0u);
    ctx->pc = 0x1766BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1766B8u;
    // 0x1766bc: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA9C8u, 0x1766B8u, 0x1766C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1766C0u;
label_1766c0:
    // 0x1766c0: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x1766c0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1766c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1766c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1766c8: 0x7e050000  sq          $a1, 0x0($s0)
    ctx->pc = 0x1766c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 5));
    // 0x1766cc: 0x2513818  mult        $a3, $s2, $s1
    ctx->pc = 0x1766ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1766d0: 0x24048000  addiu       $a0, $zero, -0x8000
    ctx->pc = 0x1766d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1766d4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1766d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1766d8: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x1766d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1766dc: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x1766dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1766e0: 0xde060008  ld          $a2, 0x8($s0)
    ctx->pc = 0x1766e0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1766e4: 0x3105003a  andi        $a1, $t0, 0x3A
    ctx->pc = 0x1766e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)58);
    // 0x1766e8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1766e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1766ec: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x1766ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1766f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1766f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1766f4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1766f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1766f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1766f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1766fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1766fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x176700: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x176700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x176704: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x176704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x176708: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x176708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17670c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x17670cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x176710: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x176710u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x176714: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x176714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x176718: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x176718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x17671c: 0x73aba  dsrl        $a3, $a3, 10
    ctx->pc = 0x17671cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 10);
    // 0x176720: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x176720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x176724: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x176724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x176728: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x176728u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x17672c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x17672cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x176730: 0xfe060008  sd          $a2, 0x8($s0)
    ctx->pc = 0x176730u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 6));
    // 0x176734: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x176734u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x176738: 0xfe070010  sd          $a3, 0x10($s0)
    ctx->pc = 0x176738u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 7));
    // 0x17673c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x17673cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x176740: 0xf  sync
    ctx->pc = 0x176740u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x176744: 0x16600015  bnez        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x176744u;
    {
        const bool branch_taken_0x176744 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x176748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176744u;
        // 0x176748: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176744) {
            ctx->pc = 0x17679Cu;
            goto label_17679c;
        }
    }
    ctx->pc = 0x17674Cu;
    // 0x17674c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17674cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x176750: 0x2442e750  addiu       $v0, $v0, -0x18B0
    ctx->pc = 0x176750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960976));
    // 0x176754: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x176754u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x176758: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x176758u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17675c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x17675cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x176760: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x176760u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x176764: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x176764u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[4])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x21E780u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x21E780u, _value); } while (0);
    // 0x176768: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x176768u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[5])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x21E770u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x21E770u, _value); } while (0);
    // 0x17676c: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x17676cu;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[6])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x21E760u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x21E760u, _value); } while (0);
    // 0x176770: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x176770u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[7])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x21E750u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x21E750u, _value); } while (0);
    // 0x176774: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x176774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x176778: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x176778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17677c: 0xc7808548  lwc1        $f0, -0x7AB8($gp)
    ctx->pc = 0x17677cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176780: 0xc781854c  lwc1        $f1, -0x7AB4($gp)
    ctx->pc = 0x176780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176784: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x176784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x21E750u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21E750u, _value); } while (0); }
    // 0x176788: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x176788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x21E764u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21E764u, _value); } while (0); }
    // 0x17678c: 0xe4420034  swc1        $f2, 0x34($v0)
    ctx->pc = 0x17678cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x21E784u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21E784u, _value); } while (0); }
    // 0x176790: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x176790u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21E78Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21E78Cu, _value); } while (0);
    // 0x176794: 0xe4420030  swc1        $f2, 0x30($v0)
    ctx->pc = 0x176794u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x21E780u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21E780u, _value); } while (0); }
    // 0x176798: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x176798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17679c:
    // 0x17679c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x17679cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1767a0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1767a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1767a4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1767a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1767a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1767a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1767ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1767ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1767B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767ACu;
        // 0x1767b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1767ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1767B4u;
}
